#pragma once
#include"D2D1Base.h"

class Render:public D2D1Base
{
public:
	void InitSource();
	void Paint();
	void Move(int dir);
public:
	//IWICImagingFactory * pImageFactory = NULL;
	//ID2D1Bitmap *bitmap = NULL;
};

void Event();