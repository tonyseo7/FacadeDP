#pragma once
#include "Picture.h"
typedef vector<Picture *>Pictures;
typedef vector<Picture *>::iterator PIter;


class PictureManager
{
	Pictures pictures;

public:
	bool Exist(string name);
	bool AddPicture(Picture *picture);
	Picture *FindPicture(string name);
	void View();
};
