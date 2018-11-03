#pragma once

#include"Item.h"

class Monster :public Item
{
public:
	void Init(int ID, int py, int hp, int agg, int def, int coin, WCHAR *ch);
	void Render(int x, int y);
	void Event(Item **pItem);
private:
	static void CALLBACK Timer(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime);
	void Update();
	int ID;
	int px, py;
	int Mhp, Magg, Mdef, Mcoin;
	WCHAR name[10];
};

void Monster::Init(int ID, int py, int hp, int agg, int def, int coin, WCHAR *ch)
{
	this->ID = ID;
	this->px = 0;
	this->py = py;
	this->Mhp = hp;
	this->Magg = agg;
	this->Mdef = def;
	this->Mcoin = coin;
	wcscpy(name, ch);
	collide = false;
	SetTimer(hwnd, (UINT_PTR)this, 100, Timer);
}

void Monster::Render(int x, int y)
{
	Draw4(ID, x, y, px, py);
}

void Monster::Timer(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime)
{
	Monster *pMonster = (Monster*)iTimerID;
	pMonster->Update();
}

void Monster::Update()
{
	if (++px >= 4)
		px = 0;
}

void Monster::Event(Item **pItem)
{
	if (agg - Mdef <= 0) return;
	int count = Mhp / (agg - Mdef);
	int loss = count * (Magg - def);
	if (hp - loss <= 0) return;
	KillTimer(hwnd, (UINT_PTR)this);
	collide = true;
	hp -= loss;
	coin += Mcoin;
	Clearup(pItem);
}