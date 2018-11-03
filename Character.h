#pragma once
#include"Item.h"

const int MATX = 32, MATY = 33;
const int ux = 5 * MAT, uy = 0;
const int xx[4] = { 0,-1,1,0 };
const int yy[4] = { 1,0,0,-1 };

class Character :public Item
{
public:
	//void Init(ID2D1Bitmap **ppBITMAP, int WIDTH, int HIGHT);
	//void Clearup();
	void Render();
	void Move(int dir);
private:
	static void CALLBACK Timer(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime);
	void Update();
	int direct = 0, point = 0;
	bool state = true;
};

void Character::Render()
{
	Draw4(ID_Braver, 
		ux + X * MAT + xx[direct] * 8 * point,
		uy + Y * MAT + yy[direct] * 8 * point,
		point,
		direct
	);
}

void Character::Move(int direct)
{
	if (!state) return;
	this->direct = direct;
	state = false;
	SetTimer(hwnd, (UINT_PTR)this, 20, Timer);
}

void Character::Timer(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime)
{
	Character *pCharacter = (Character*)iTimerID;
	pCharacter->Update();
}

void Character::Update()
{
	if (++point >= 4)
	{
		KillTimer(hwnd, (UINT_PTR)this);
		X += xx[direct]; Y += yy[direct];
		state = true;
		point = 0;
	}
}