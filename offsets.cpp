#include "main_superpatch.h"

// Offsets to be modified
void cMemPatch::LoadSettings(std::vector<cMemPatch> &patch)
{
	// Austria
	patch.push_back( cMemPatch(0x8EFFCE,12,1,"Austria lineup 12 foreigners") );
	patch.push_back( cMemPatch(0x8F21D2,12,1,"Austria roster 12 foreigners") );	
	patch.push_back( cMemPatch(0x94686F,55,1,"# of games") );
	patch.push_back( cMemPatch(0x946872,2805,2,"# of games x51") );
	patch.push_back( cMemPatch(0x94793A,5,1,"# of rounds") );
	patch.push_back( cMemPatch(0x9479EE,55,1,"Initial # of games") );
	patch.push_back( cMemPatch(0x9468CA,7,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9468F8,9,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946926,14,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946952,8,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946954,16,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946980,8,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946982,21,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9469AE,8,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9469B0,23,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9469DC,8,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9469DE,28,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946A0A,8,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946A0C,30,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946A3A,5,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946A68,7,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946A96,12,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946AC4,14,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946AF2,19,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946B20,21,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946B4E,26,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946B7A,9,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946B7C,28,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946BA8,9,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946BAA,30,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946BD8,2,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946C06,4,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946C34,14,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946C62,16,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946C90,18,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946CBE,20,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946CEC,23,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946D1A,25,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946D46,10,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946D48,30,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946D76,2,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946DA4,7,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946DE0,9,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946E0E,14,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946E3C,16,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946E6A,21,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946E98,23,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946EC2,0,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946EC4,11,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946EC6,26,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946EF0,0,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946EF2,11,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946EF4,28,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946F1E,0,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946F20,11,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946F22,30,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946F50,1,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946F7E,4,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946FAC,6,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x946FDA,11,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947008,13,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947036,15,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947064,18,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947090,0,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947092,20,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9470BE,0,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9470C0,22,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9470EC,0,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9470EE,25,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x94711A,0,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x94711C,27,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947148,0,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x94714A,29,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947178,1,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9471A6,3,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9471D2,1,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x9471D4,12,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947200,1,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947202,15,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x94722E,1,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x947230,17,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x94725C,1,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x94725E,19,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x94728A,1,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0x94728C,22,1,"Change EBEL schedule") );
	patch.push_back( cMemPatch(0xBB52F8,48,1,"Teams to 12") );
	patch.push_back( cMemPatch(0xBB52F9,57,1,"Teams to 12") );
	patch.push_back( cMemPatch(0xBB52FA,146,1,"Teams to 12") );
	
	// Czech Republic
	patch.push_back( cMemPatch(0x93502E,28,1,"CZ game rules") );
	patch.push_back( cMemPatch(0x8F243E,6,1,"CZ 6 foreigners") );
	patch.push_back( cMemPatch(0x93460B,19,1,"CZ SF date") );
	patch.push_back( cMemPatch(0x934624,20,1,"CZ SF date") );
	patch.push_back( cMemPatch(0x93467B,27,1,"CZ Finals date") );
	patch.push_back( cMemPatch(0x934691,28,1,"CZ Finals date") );

	// Denmark
	patch.push_back( cMemPatch(0x8F28CD,6,1,"Den 8 foreigners") );
	patch.push_back( cMemPatch(0x8F28CE,8,1,"Den 8 foreigners") );
	patch.push_back( cMemPatch(0x8F28CF,94,1,"Den 8 foreigners") );
	patch.push_back( cMemPatch(0x8F28D0,194,1,"Den 8 foreigners") );
	patch.push_back( cMemPatch(0x8F28D1,16,1,"Den 8 foreigners") );
	patch.push_back( cMemPatch(0x8F28D2,0,1,"Den 8 foreigners") );
	patch.push_back( cMemPatch(0x8F28D3,204,1,"Den 8 foreigners") );

	// Finland
	patch.push_back( cMemPatch(0x8F2BED,70,1,"Finland 3 non EUs") );
	patch.push_back( cMemPatch(0x8F2BEE,1,1,"Finland 3 non EUs") );
	patch.push_back( cMemPatch(0x8F2BEF,3,1,"Finland 3 non EUs") );
	patch.push_back( cMemPatch(0x8F2BF0,94,1,"Finland 3 non EUs") );
	patch.push_back( cMemPatch(0x8F2BF1,194,1,"Finland 3 non EUs") );
	patch.push_back( cMemPatch(0x8F2BF2,16,1,"Finland 3 non EUs") );
	patch.push_back( cMemPatch(0x8F2BF3,0,1,"Finland 3 non EUs") );
	patch.push_back( cMemPatch(0x92024A,28,1,"SM Liiga") );
	patch.push_back( cMemPatch(0x9251B3,16,1,"SM Liiga PO Best of 7") );
	patch.push_back( cMemPatch(0x9251DB,6,1,"SM Liiga PO Best of 7") );
	patch.push_back( cMemPatch(0x9251F3,7,1,"SM Liiga PO Best of 7") );
	patch.push_back( cMemPatch(0x925231,16,1,"SM Liiga PO Best of 7") );
	patch.push_back( cMemPatch(0x925259,8,1,"SM Liiga PO Best of 7") );
	patch.push_back( cMemPatch(0x925270,9,1,"SM Liiga PO Best of 7") );
	patch.push_back( cMemPatch(0x923ACA,28,1,"Fin Mestis") );
	patch.push_back( cMemPatch(0x923ACB,67,1,"Fin Mestis (42)") );
	patch.push_back( cMemPatch(0x925BDE,28,1,"Fin Suomi") );	
	patch.push_back( cMemPatch(0x925BDF,67,1,"Fin Suomi (42)") );
	patch.push_back( cMemPatch(0x9202B2,20,1,"Suomi 20 players dressed") );
	patch.push_back( cMemPatch(0x923B24,20,1,"Mestis 20 players dressed") );
	patch.push_back( cMemPatch(0x925C34,20,1,"SM Liiga 20 players dressed") );

	// Germany
	patch.push_back( cMemPatch(0x94179E,21,1,"DEL 21 players dressed") );
	patch.push_back( cMemPatch(0x8F1CEE,9,1,"Germany lineup 9 foreigners") );
	patch.push_back( cMemPatch(0x8F1CF6,3,1,"Germany lineup U26 to 3") );
	patch.push_back( cMemPatch(0x8F1A91,10,1,"Germany roster 10 foreigners") );

	// Russia
	patch.push_back( cMemPatch(0x9450AC,28,1,"RUS game rules") );
	patch.push_back( cMemPatch(0x8F051E,5,1,"Rus 5 foreigners") );
	patch.push_back( cMemPatch(0x8F0495,25,1,"Russia 25 man roster") );
	patch.push_back( cMemPatch(0x8F04E2,25,1,"RSL 25 man roster") );

	// Slovakia
	patch.push_back( cMemPatch(0x8F00BD,70,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00BE,6,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00BF,20,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C0,198,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C1,70,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C2,7,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C3,1,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C4,94,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C5,194,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C6,16,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C7,0,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C8,204,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00C9,204,1,"Slovakia remove foreigners") );
	patch.push_back( cMemPatch(0x8F00CA,204,1,"Slovakia remove foreigners") );

	// Sweden
	patch.push_back( cMemPatch(0x94DBDB,28,1,"Elitserien") );
	patch.push_back( cMemPatch(0x94B29F,28,1,"Allsvenskan") );
	
	// International: U20 Tournaments
	patch.push_back( cMemPatch(0x9071A1,16,1,"U20 Cup CZ") );
	patch.push_back( cMemPatch(0x907CF1,16,1,"U20 Cup SWE") );
	patch.push_back( cMemPatch(0x9087C1,16,1,"U20 Cup FIN") );
	patch.push_back( cMemPatch(0x9092D1,16,1,"U20 Cup RUS") );

	// International: Senior Tournaments
	patch.push_back( cMemPatch(0x903C18,16,1,"Cont Cup") );
	patch.push_back( cMemPatch(0x905B2F,16,1,"Euro Champ Cup") );
	patch.push_back( cMemPatch(0x903C19,75,1,"Cont Cup") );
	patch.push_back( cMemPatch(0x905B30,75,1,"Euro Champ Cup") );
	
	// Unknown	
	patch.push_back( cMemPatch(0x59B67F,9999,4,"Value 39") );
	patch.push_back( cMemPatch(0x6031AF,9999,2,"Value 40") );
	patch.push_back( cMemPatch(0x6086CC,9999,2,"Value 41") );
	patch.push_back( cMemPatch(0x6502F4,9999,2,"Value 42") );
	patch.push_back( cMemPatch(0x650A01,2099,2,"Value 43") );
	patch.push_back( cMemPatch(0x946842,194,1,"Value 86") );
	patch.push_back( cMemPatch(0x946843,39,1,"Value 87") );
	patch.push_back( cMemPatch(0x9468B6,154,1,"Value 88") );
	patch.push_back( cMemPatch(0x9468B7,39,1,"Value 89") );
	patch.push_back( cMemPatch(0x9472A7,235,1,"Value 90") );
	patch.push_back( cMemPatch(0x9472A8,44,1,"Value 91") );
	patch.push_back( cMemPatch(0x9472A9,144,1,"Value 92") );
	patch.push_back( cMemPatch(0x9472AA,144,1,"Value 93") );
	patch.push_back( cMemPatch(0x9479AD,235,1,"Value 94") );
	patch.push_back( cMemPatch(0x9479AE,82,1,"Value 95") );
	patch.push_back( cMemPatch(0x9479AF,144,1,"Value 96") );
	patch.push_back( cMemPatch(0x9479B0,144,1,"Value 97") );
	patch.push_back( cMemPatch(0x9479B1,144,1,"Value 98") );
	patch.push_back( cMemPatch(0x9479B2,144,1,"Value 99") );
	patch.push_back( cMemPatch(0x947A01,198,1,"Value 100") );
	patch.push_back( cMemPatch(0x947A02,134,1,"Value 101") );
	patch.push_back( cMemPatch(0x947A03,189,1,"Value 102") );
	patch.push_back( cMemPatch(0x947A04,0,1,"Value 103") );
	patch.push_back( cMemPatch(0x947A05,0,1,"Value 104") );
	patch.push_back( cMemPatch(0x947A06,0,1,"Value 105") );
	patch.push_back( cMemPatch(0x947A07,8,1,"Value 106") );
	patch.push_back( cMemPatch(0x947A08,235,1,"Value 107") );
	patch.push_back( cMemPatch(0x947A09,165,1,"Value 108") );
	patch.push_back( cMemPatch(0x9483DD,223,1,"Playoff requirement") );
	patch.push_back( cMemPatch(0x9483DE,17,1,"Playoff requirement") );
	patch.push_back( cMemPatch(0x9483DF,0,1,"Playoff requirement") );
	patch.push_back( cMemPatch(0x9483E0,0,1,"Playoff requirement") );

	return;
}