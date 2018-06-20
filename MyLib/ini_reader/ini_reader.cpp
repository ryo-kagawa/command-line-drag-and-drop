//�C���N���[�h
#include "ini_reader.h"
#include "../string_trim/string_trim.h"
#include "../get_program_path/get_program_path.h"

#include <fstream>
#include <iostream>
#include <string>
#include <map>

//�R���X�g���N�^
ini_reader::ini_reader(const std::string &fileName, const char &commentPrefix, const char &separator, const std::string &trimString):
	properties()
{
	const std::string relativePath(MyFunction::get_program_path());

	//�t�@�C���X�g���[��
	std::ifstream ifs(relativePath + fileName);
	//1�s�̕�����
	std::string lineString;

	//���s�܂ł�1�s���擾
	while(getline(ifs, lineString)) {
		//�g����
		MyFunction::trim(lineString, trimString);
		//�R�����g�s�Ȃ珈�����Ȃ�
		if(lineString[0] == commentPrefix) {
			continue;
		}
		//��؂蕶���̈ʒu
		const size_t separatorPos = lineString.find(separator);
		//��؂蕶�����Ȃ���Ώ������Ȃ�
		if(separatorPos == std::string::npos) {
			continue;
		}
		//�v���p�e�B��
		const std::string name = MyFunction::trim(lineString.substr(0, separatorPos), trimString);
		//�v���p�e�B�̒l
		const std::string value = MyFunction::trim(lineString.substr(separatorPos + 1, lineString.length()), trimString);

		//�v���p�e�B�̊i�[
		properties.insert(std::pair<const std::string, const std::string>(name, value));
	}
}

const std::string ini_reader::get(const std::string &keyName) const {
	return properties.at(keyName);
}
