#include "stdafx.h"
#include "Compensator.h"

void Compensator::Change(Picture *picture, int tone, int brightness, int saturation)
{
	picture->Change(tone, brightness, saturation);
}