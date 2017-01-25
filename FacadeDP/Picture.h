#pragma once
#include "common.h"

class Picture
{
	int tone;
	int brightness;
	int saturation;
	const string name;

public:
	Picture(string name, int tone, int bright, int satur);
	void Change(int tone, int bright, int satur);
	bool IsEqual(string name);
	void View();
	string GetName()const;
};