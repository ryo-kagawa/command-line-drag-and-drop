//インクルード
#include "exec_ini_Reader.h"
#include "../MyLib/get_program_path/get_program_path.h"

#include <iostream>

//定数宣言
//コメント行
static const char COMMENT_PREFIX = '#';
//区切り文字
static const char SEPARATOR = '=';
//トリム文字
static const std::string TRIM = {' ', '\t'};
//プロパティ
namespace PROPERTIES {
	static const std::string PROGRAM_FILE_PATH = "programFile";
}

exec_ini_Reader::exec_ini_Reader():
	iniReader(MyFunction::get_program_name() + ".ini", COMMENT_PREFIX, SEPARATOR, TRIM)
{
}

const std::string exec_ini_Reader::getProgramFilePath() const {
	return iniReader.get(PROPERTIES::PROGRAM_FILE_PATH);
}
