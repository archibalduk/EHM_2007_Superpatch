#include "main_superpatch.h"

// Static class members
bool cMemPatch::error_flag_ = false;

int main()
{
	// Left align all text
	std::cout << setiosflags(std::ios::left)
			  << "http://www.ehmtheblueline.com" << std::endl
			  << std::endl
			  << "EHM SuperPatch v1.0" << std::endl
			  << "by Archibalduk, Alessandro & Hobbit13" << std::endl
			  << std::endl;

	// Get the process ID for ehm2007.exe and open/access the process
	void EnableDebugPriv();
	DWORD ehm2007_process_id = cMemPatch::GetPIDForProcess(L"ehm2007.exe");
	HANDLE ehm2007_exe = OpenProcess(PROCESS_ALL_ACCESS, false, ehm2007_process_id);

	// If the process couldn't be opened, abort the patch
	if(!ehm2007_exe)
	{
		std::cout << "ERROR: Unable to access the EHM 2007 process. Possible causes include:" << std::endl
				  << std::endl
				  << "1) EHM 2007 is not running." << std::endl
				  << "2) You have not used the Run as Admin setting (Windows Vista and higher)" << std::endl
				  << std::endl
				  << "Press ENTER to close this window.";

		std::cin.get();
		return 1;
	}

	// Add the offsets to the class
	std::vector<cMemPatch> patch;
	cMemPatch::LoadSettings(patch);

	// Unprotect the memory in order to enable write access
	if(!cMemPatch::SetAccessLevel(ehm2007_exe, false))
	{
		std::cout << std::endl << "Error code " << GetLastError() << ". Unable to unprotect memory access. Patch Aborted." << std::endl;
		return 1;
	}
	
	// Iterate through each element of the vector and write the values to the memory
	for(auto itr = patch.begin(); itr < patch.end(); ++itr)
		itr->Write(ehm2007_exe);
	
	// Re-protect the memory following completion of the write process
	if(!cMemPatch::SetAccessLevel(ehm2007_exe, true))
		std::cout << std::endl << "Error code " << GetLastError() << ". Unable to re-protect memory access. EHM may encounter an unexpected error." << std::endl;
		
	// Check whether any errors were encountered
	cMemPatch::ErrorCheck();

	std::cout << std::endl << "Press ENTER to close this window." << std::endl;
	std::cin.get();

	return 0;
}

// Class constructor
cMemPatch::cMemPatch(int offset, int value, char size, std::string description)
{
	offset_ = offset;
	value_ = value;
	size_ = size;
	description_ = description;
}

// Check for any errors encountered during the patch process
void cMemPatch::ErrorCheck()
{
	if(error_flag_ == false)
	{
		std::cout << std::endl
				  << "Patch successfully applied!" << std::endl;
		return;
	}

	else
	{
		std::cout << std::endl
				  << "Error(s) have been encountered. Please check the above list for more details." << std::endl
				  << "If you have ArtMoney intalled, please ensure that is not running." << std::endl;
		return;
	}
}

// Get process ID for a running process
DWORD cMemPatch::GetPIDForProcess (wchar_t* process)
{
    BOOL working=0;
    PROCESSENTRY32 lppe={0};
    DWORD targetPid=0;
    HANDLE hSnapshot=CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS ,0);
    if (hSnapshot) 
	{
		lppe.dwSize=sizeof(lppe);
		working=Process32First(hSnapshot,&lppe);
		while (working)
		{
			if(wcscmp(lppe.szExeFile,process)==0)
			{
				targetPid=lppe.th32ProcessID;
				break;
			}
			working=Process32Next(hSnapshot,&lppe);
		}
	}
    CloseHandle( hSnapshot );
    return targetPid;
}

// Protect/Unprotect the memory
bool cMemPatch::SetAccessLevel(HANDLE &ehm2007_exe, bool protect)
{	
	DWORD flNewProtect = 0;		// Buffer to store the state of the new access protection
	DWORD lpflOldProtect = 0;	// Buffer to store the state of the previous access protection
	int offset = 0xA1A000;		// Offset of target memory to protect
	int size = 0x1D3000;		// Size of memory to protect (0x1D3000 = 1912832 bytes)

	// Set the new access protection according to whether the protect flag as been set
	if(protect == true)
		flNewProtect = PAGE_READONLY;
	else
		flNewProtect = PAGE_READWRITE;	

	if(!VirtualProtectEx(ehm2007_exe, (void *)offset, size, flNewProtect, &lpflOldProtect))
		return false;
	else
		return true;
}

// Write values to the memory
bool cMemPatch::Write(HANDLE &ehm2007_exe)
{
	// Buffer for reading the memory
	int current_value = 0;

	// Read the memory to find the value before patching
	ReadProcessMemory(ehm2007_exe, (void *)offset_, &current_value, size_, NULL);

	// Display the changes
	std::cout << std::setw(COL1) << std::hex << std::showbase << offset_ << std::dec << std::setw(COL2) << static_cast<short>(size_) << std::setw(COL3) << current_value << std::setw(COL3); 

	// Write the new value to the memory
	if(WriteProcessMemory(ehm2007_exe, (void *)offset_, &value_, size_, NULL))
		std::cout << value_ << description_ << std::endl;

	// Else if unsuccessful
	else
	{
		error_flag_ = true;
		std::cout << "ERROR" << "Error code " << GetLastError() << " (" << description_ << ")" << std::endl;
	}

	return true;
}