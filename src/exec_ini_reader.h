#pragma once

//�C���N���[�h
#include "../MyLib/ini_reader/ini_reader.h"

#include <string>

class exec_ini_Reader {
public:
	//�R���X�g���N�^
	exec_ini_Reader();
	//�t�@�C�����̎擾
	const std::string getProgramFilePath() const;
private:
	//ini�t�@�C���ǂݍ���
	ini_reader iniReader;
};
