#include "stdafx.h"
#include "SmartManager.h"

void main()
{
	Picture *picture = new Picture("������ ����", 100, 100, 100);
	
	SmartManager *sm = new SmartManager();

	sm->AddPicture(picture);

	sm->Change("������ ����", 10, 20, -50);

	sm->View();

	delete sm;
	delete picture;
}