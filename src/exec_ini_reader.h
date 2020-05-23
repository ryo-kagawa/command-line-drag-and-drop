#pragma once

//インクルード
#include "../MyLib/ini_reader/ini_reader.h"

#include <string>

class exec_ini_Reader {
public:
	//コンストラクタ
	exec_ini_Reader();
	//ファイル名の取得
	const std::string getProgramFilePath() const;
private:
	//iniファイル読み込み
	ini_reader iniReader;
};
