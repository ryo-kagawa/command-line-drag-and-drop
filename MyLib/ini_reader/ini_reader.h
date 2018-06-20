#pragma once

//インクルード
#include <string>
#include <map>

//iniファイル読み込みクラス
class ini_reader {
//関数
public:
	//コンストラクタ
	ini_reader(const std::string &fileName, const char &commentPrefix, const char &separator, const std::string &trimString);
	//パラメータの取得
	const std::string get(const std::string &keyName) const;
//変数
private:
	//プロパティ
	std::map<const std::string, const std::string> properties;
};
