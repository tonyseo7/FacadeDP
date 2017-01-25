#include "stdafx.h"
#include "SmartManager.h"

void main()
{
	Picture *picture = new Picture("攫力唱 绒老", 100, 100, 100);
	
	SmartManager *sm = new SmartManager();

	sm->AddPicture(picture);

	sm->Change("攫力唱 绒老", 10, 20, -50);

	sm->View();

	delete sm;
	delete picture;
}