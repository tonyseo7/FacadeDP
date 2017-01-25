#include "stdafx.h"
#include "PictureManager.h"

bool PictureManager::Exist(string name)
{
	return FindPicture(name) != 0;
}

bool PictureManager::AddPicture(Picture *picture)
{
	if (Exist(picture->GetName()))
	{
		return false;
	}

	pictures.push_back(picture);

	return true;
}

Picture *PictureManager::FindPicture(string name)
{
	PIter seek = pictures.begin();
	PIter end = pictures.end();
	Picture *picture = 0;

	for (; seek != end; ++seek)
	{
		picture = (*seek);

		if (picture->IsEqual(name))
		{
			return picture;
		}
	}

	return 0;
}

void PictureManager::View()
{
	PIter seek = pictures.begin();
	PIter end = pictures.end();
	Picture *picture = 0;

	for (; seek != end; ++seek)
	{
		picture = (*seek);
		picture->View();
	}
}