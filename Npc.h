#pragma once

#include"Item.h"

class Npc :public Item
{
public:
	void Init(int py);
	void Render(int x, int y);
	void Event(Item **pItem);
private:
	static void CALLBACK Timer(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime);
	void Update();
	int ID = ID_NPC;
	int px, py;
};

void Npc::Init(int py)
{
	this->px = 0;
	this->py = py;
	collide = false;
	SetTimer(hwnd, (UINT_PTR)this, 100, Timer);
}

void Npc::Render(int x, int y)
{
	Draw4(ID, x, y, px, py);
}

void Npc::Timer(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime)
{
	Npc *pNpc = (Npc*)iTimerID;
	pNpc->Update();
}

void Npc::Update()
{
	if (++px >= 4)
		px = 0;
}

void Npc::Event(Item **pItem)
{
	EventEx();
	KillTimer(hwnd, (UINT_PTR)this);
	collide = true;
	Clearup(pItem);
}