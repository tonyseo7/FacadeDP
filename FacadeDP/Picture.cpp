#include "stdafx.h"
#include "Picture.h"

Picture::Picture(string name, int tone, int bright, int satur) : name(name)
{
	this->tone = tone;
	this->brightness = bright;
	this->saturation = satur;
}

void Picture::Change(int tone, int bright, int satur)
{
	this->tone += tone;
	this->brightness += bright;
	this->saturation += satur;
}

bool Picture::IsEqual(string name)
{
	return this->name == name;
}

void Picture::View()
{
	cout << "사진 이름: " << name << endl;
	cout << "색조:" << tone << "명도: ";
	cout << brightness << "채도: " << saturation << endl;
}

string Picture::GetName()const
{
	return name;
}