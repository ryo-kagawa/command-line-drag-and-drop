#pragma once

//インクルード
#include <string>

//関数のプロトタイプ宣言
namespace MyFunction {
	//プログラム実行ディレクトリパスの取得
	const std::string get_program_path();

	//プログラムファイルのフルパスの取得
	const std::string get_program_full_path();

	//プログラムファイル名の取得
	const std::string get_program_name();
}
