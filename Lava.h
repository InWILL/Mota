#pragma once

#include"Diamond.h"

class Downstair :public Diamond
{
public:
	Downstair()
	{
		Init(ID_Tileset, 0, 31, true, 8, 38);
	}
	void Event(Item**) { stair--; }
};

class Upstair :public Diamond
{
public:
	Upstair()
	{
		Init(ID_Tileset, 1, 31, true, 8, 38);
	}
	void Event(Item**) { stair++; }
};

class Wall :public Diamond
{
public:
	Wall()
	{
		Init(ID_Tileset, 6, 0, false, 8, 38);
	}
};
