#pragma once
#include "PictureManager.h"
#include "Compensator.h"

class SmartManager
{
	Compensator *compensator;				//하위 계츨 개체
	PictureManager *pic_manager;			//하위 계츨 개체

public:
	SmartManager();
	~SmartManager();
	bool Exist(string name);
	bool AddPicture(Picture *picture);
	Picture *FindPicture(string name);
	bool Change(string name, int tone, int bright, int satur);
	void View();
};


