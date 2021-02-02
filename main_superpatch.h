#ifndef MAIN_SUPERPATCH_H
#define MAIN_SUPERPATCH_H

#define _WIN32_WINNT _WIN32_WINNT_WINXP // Enables Windows XP compatibility

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <Tlhelp32.h>

class cMemPatch
{
private:
	int offset_;
	int value_;
	char size_;
	std::string description_;

	// Static members
	static bool error_flag_;

public:
	cMemPatch(int, int, char, std::string);
	~cMemPatch() {}

	// Member functions
	bool Write(HANDLE &);

	// Static functions
	static void ErrorCheck();
	static DWORD GetPIDForProcess(wchar_t*);
	static void LoadSettings(std::vector<cMemPatch> &);
	static bool SetAccessLevel(HANDLE &, bool);
};

// Column widths for text output
enum ENUM_COLUMN_WIDTH
{
	COL1 = 10,
	COL2 = 5,
	COL3 = 8
};

#endif