//インクルード
#include "get_program_path.h"

#include <Windows.h>

const std::string MyFunction::get_program_path() {
	char path[MAX_PATH];
	GetModuleFileNameA(NULL, path, MAX_PATH);
	char drive[MAX_PATH];
	char dir[MAX_PATH];
	_splitpath_s(path, drive, MAX_PATH, dir, MAX_PATH, NULL, 0, NULL, 0);
	const std::string relativePath(std::string(drive) + std::string(dir));

	return relativePath;
}

const std::string MyFunction::get_program_full_path() {
	char path[MAX_PATH];
	GetModuleFileNameA(NULL, path, MAX_PATH);
	char drive[MAX_PATH];
	char dir[MAX_PATH];
	char fileName[MAX_PATH];
	char ext[MAX_PATH];
	_splitpath_s(path, drive, MAX_PATH, dir, MAX_PATH, fileName, MAX_PATH, ext, MAX_PATH);
	const std::string relativePath(std::string(drive) + std::string(dir) + std::string(fileName) + std::string(ext));

	return relativePath;
}

const std::string MyFunction::get_program_name() {
	char path[MAX_PATH];
	GetModuleFileNameA(NULL, path, MAX_PATH);
	char fileName[MAX_PATH];
	_splitpath_s(path, NULL, 0, NULL, 0, fileName, MAX_PATH, NULL, 0);

	//FIXME: 空文字列を追加しないとキャストエラーになるが理由が不明
	const std::string relativePath(std::string(fileName) + "");

	return relativePath;
}
