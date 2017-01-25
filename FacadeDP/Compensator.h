#pragma once
#include "Picture.h"

class Compensator
{
public:
	void Change(Picture *picture, int tone, int brightness, int saturation);
};
