#include "stdafx.h"
#include "SmartManager.h"

SmartManager::SmartManager(void)
{
	compensator = new Compensator();
	pic_manager = new PictureManager();
}

SmartManager::~SmartManager(void)
{
	delete compensator;
	delete pic_manager;
}

bool SmartManager::Exist(string name)
{
	return pic_manager->Exist(name);
}

bool SmartManager::AddPicture(Picture *picture)
{
	return pic_manager->AddPicture(picture);
}

Picture *SmartManager::FindPicture(string name)
{
	return pic_manager->FindPicture(name);
}

bool SmartManager::Change(string name, int tone, int bright, int satur)
{
	Picture *picture = FindPicture(name);

	if (picture == 0)
	{
		return false;
	}

	picture->Change(tone, bright, satur);

	return true;
}

void SmartManager::View()
{
	pic_manager->View();
}