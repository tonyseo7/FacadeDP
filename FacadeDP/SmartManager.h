#pragma once
#include "PictureManager.h"
#include "Compensator.h"

class SmartManager
{
	Compensator *compensator;				//���� ���� ��ü
	PictureManager *pic_manager;			//���� ���� ��ü

public:
	SmartManager();
	~SmartManager();
	bool Exist(string name);
	bool AddPicture(Picture *picture);
	Picture *FindPicture(string name);
	bool Change(string name, int tone, int bright, int satur);
	void View();
};


