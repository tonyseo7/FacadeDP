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
	cout << "���� �̸�: " << name << endl;
	cout << "����:" << tone << "��: ";
	cout << brightness << "ä��: " << saturation << endl;
}

string Picture::GetName()const
{
	return name;
}