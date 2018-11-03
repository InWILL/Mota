#pragma once
#include"stdafx.h"

class Item
{
public:
	virtual void Init(int, ...) {};
	void Clearup(Item **pItem) { (*pItem) = NULL; delete this; };
	virtual void Update() {};
	virtual void Render(int,int) {};
	virtual void Event(Item**) {};
	bool collide;
};