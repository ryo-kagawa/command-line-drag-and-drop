#pragma once

//�C���N���[�h
#include <string>
#include <map>

//ini�t�@�C���ǂݍ��݃N���X
class ini_reader {
//�֐�
public:
	//�R���X�g���N�^
	ini_reader(const std::string &fileName, const char &commentPrefix, const char &separator, const std::string &trimString);
	//�p�����[�^�̎擾
	const std::string get(const std::string &keyName) const;
//�ϐ�
private:
	//�v���p�e�B
	std::map<const std::string, const std::string> properties;
};
