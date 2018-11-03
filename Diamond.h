#pragma once
#include"Item.h"

class Diamond:public Item
{
public:
	void Init(int ID,int x,int y,int collide, int divx=1, int divy=1);
	void Render(int x,int y);
protected:
	int ID;
	int x, y;
	int divx, divy;
};

void Diamond::Init(int ID, int x, int y, int collide,int divx,int divy)
{
	this->ID = ID;
	this->x = x;
	this->y = y;
	this->collide = collide;
	this->divx = divx;
	this->divy = divy;
}

void Diamond::Render(int dx,int dy)
{
	Draw(ID, dx, dy, x, y,divx,divy);
}