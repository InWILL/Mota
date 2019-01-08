#pragma once

#include"Door.h"

class DoorYellow :public Door
{
public:
	DoorYellow() { Init(ID_Door,0); }
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
	DoorBlue() { Init(ID_Door,1); }
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
	DoorRed() { Init(ID_Door,2); }
	void Event(Item** pItem)
	{
		if (red)
		{
			red--;
			Unlock(pItem);
		}
	}
};

class DoorPW :public Door
{
public:
	DoorPW() { Init(ID_Door,3); }
};

class WallEx :public Door
{
public:
	WallEx() { Init(ID_Wall, 1); }
	void Event(Item** pItem)
	{
		Unlock(pItem);
	}
};

class Cage :public Door
{
public:
	Cage() { Init(ID_Wall, 3); }
};