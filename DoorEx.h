#pragma once

#include"Door.h"

class DoorYellow :public Door
{
public:
	DoorYellow() { Init(0); }
	void Event(Item** pItem)
	{
		if (yellow)
		{
			yellow--;
			Unlock(pItem);
		}
	}
};

class DoorBlue :public Door
{
public:
	DoorBlue() { Init(1); }
	void Event(Item** pItem)
	{
		if (blue)
		{
			blue--;
			Unlock(pItem);
		}
	}
};

class DoorRed :public Door
{
public:
	DoorRed() { Init(2); }
	void Event(Item** pItem)
	{
		if (red)
		{
			red--;
			Unlock(pItem);
		}
	}
};