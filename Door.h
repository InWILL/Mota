#pragma once

#include"Item.h"

class Door :public Item
{
public:
	void Init(int ID,int p);
	void Render(int dx, int dy);
	void Unlock(Item** pItem);
protected:
	int ID, px, py = 0;
private:
	static void CALLBACK Timer(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime);
	void Update();
	Item **pItem;
};

void Door::Init(int ID,int px)
{
	collide = false;
	this->ID = ID;
	this->px = px;
}

void Door::Render(int dx, int dy)
{
	Draw4(ID,dx,dy,px,py);
}

void Door::Unlock(Item** pItem)
{
	this->pItem = pItem;
	SetTimer(hwnd, (UINT_PTR)this, 20, Timer);
}

void Door::Update()
{
	if (++py >= 4)
	{
		KillTimer(hwnd, (UINT_PTR)this);
		collide = true;
		Clearup(pItem);
	}
}

void Door::Timer(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime)
{
	Door *pDoor = (Door*)iTimerID;
	pDoor->Update();
}