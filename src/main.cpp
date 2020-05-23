//インクルード
#include "exec_ini_Reader.h"

#include <conio.h>
#include <codecvt>
#include <string>

//メイン関数
int wmain(const int argc, const wchar_t *argv[]) {
	const exec_ini_Reader IniReader = exec_ini_Reader();
	std::string command = IniReader.getProgramFilePath();
	std::wstring command2 = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(command);
	for(int i=1; i<argc; ++i) {
		std::wstring temp(argv[i]);
		command2 += L" \"" + temp + L"\"";
	}
	_wsystem(command2.c_str());

	return EXIT_SUCCESS;
}
