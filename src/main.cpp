//インクルード
#include "exec_ini_Reader.h"

#include <cstdlib>
#include <conio.h>
#include <algorithm>
#include <filesystem>
#include <iostream>

//メイン関数
int main(const int argc, const char *argv[]) {
	const exec_ini_Reader IniReader = exec_ini_Reader();
	std::string command = IniReader.getProgramFilePath();
	for(int i=1; i<argc; ++i) {
		command += " \"" + std::string(argv[i]) + "\"";
	}
	system(command.c_str());

	_getch();
	_kbhit();
	return EXIT_SUCCESS;
}
