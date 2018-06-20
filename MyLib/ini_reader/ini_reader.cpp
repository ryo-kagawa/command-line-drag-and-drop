//インクルード
#include "ini_reader.h"
#include "../string_trim/string_trim.h"
#include "../get_program_path/get_program_path.h"

#include <fstream>
#include <iostream>
#include <string>
#include <map>

//コンストラクタ
ini_reader::ini_reader(const std::string &fileName, const char &commentPrefix, const char &separator, const std::string &trimString):
	properties()
{
	const std::string relativePath(MyFunction::get_program_path());

	//ファイルストリーム
	std::ifstream ifs(relativePath + fileName);
	//1行の文字列
	std::string lineString;

	//改行までの1行を取得
	while(getline(ifs, lineString)) {
		//トリム
		MyFunction::trim(lineString, trimString);
		//コメント行なら処理しない
		if(lineString[0] == commentPrefix) {
			continue;
		}
		//区切り文字の位置
		const size_t separatorPos = lineString.find(separator);
		//区切り文字がなければ処理しない
		if(separatorPos == std::string::npos) {
			continue;
		}
		//プロパティ名
		const std::string name = MyFunction::trim(lineString.substr(0, separatorPos), trimString);
		//プロパティの値
		const std::string value = MyFunction::trim(lineString.substr(separatorPos + 1, lineString.length()), trimString);

		//プロパティの格納
		properties.insert(std::pair<const std::string, const std::string>(name, value));
	}
}

const std::string ini_reader::get(const std::string &keyName) const {
	return properties.at(keyName);
}
