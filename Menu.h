#pragma once
#include"Item.h"

class Menu :public Item
{
public:
	void Init();
	void Clearup();
	void Render(int x=0, int y=0);
};

void Menu::Init()
{
	hp = 1000;
	agg = def = 100;
	coin = 0;
	stair = 1;
	yellow = blue = red = 1;
	X = 6; Y = 11;
	book = note = wand = pick = reel = snow = 
		boom = magicKey = holywater = lockcoin = 
		crucifix = knife = wandup = wanddown = wandcore = 0;
}

void Menu::Clearup()
{
	
}

void Menu::Render(int x, int y)
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 13; j++)
			Draw838(ID_Tileset, i*MAT, j*MAT, 7, 0);
	for (int i = 1; i < 4; i++)
		for (int j = 1; j < 6; j++)
			Draw838(ID_Tileset, i*MAT, j*MAT, 3, 1);
	for (int i = 1; i < 4; i++)
		for (int j = 8; j < 11; j++)
			Draw838(ID_Tileset, i*MAT, j*MAT, 3, 1);
	Draw(ID_KeyYellow, 1 * MAT, 8 * MAT);
	Draw(ID_KeyBlue, 1 * MAT, 9 * MAT);
	Draw(ID_KeyRed, 1 * MAT, 10 * MAT);
	WCHAR ch[50];
	wsprintf(ch, TEXT("Ä§Ëþ µÚ%d²ã"), stair);
	pRT->DrawText(
		ch,
		wcslen(ch),
		pTextFormat,
		D2D1::RectF(MAT*1, MAT*1, MAT*4, MAT*2),
		pWhiteBrush
	);
	wsprintf(ch, TEXT("ÉúÃü %d"), hp);
	pRT->DrawText(
		ch,
		wcslen(ch),
		pTextFormat,
		D2D1::RectF(MAT * 1, MAT * 2, MAT * 4, MAT * 3),
		pWhiteBrush
	);
	wsprintf(ch, TEXT("¹¥»÷ %d"), agg);
	pRT->DrawText(
		ch,
		wcslen(ch),
		pTextFormat,
		D2D1::RectF(MAT * 1, MAT * 3, MAT * 4, MAT * 4),
		pWhiteBrush
	);
	wsprintf(ch, TEXT("·ÀÓù %d"), def);
	pRT->DrawText(
		ch,
		wcslen(ch),
		pTextFormat,
		D2D1::RectF(MAT * 1, MAT * 4, MAT * 4, MAT * 5),
		pWhiteBrush
	);
	wsprintf(ch, TEXT("½ð±Ò %d"), coin);
	pRT->DrawText(
		ch,
		wcslen(ch),
		pTextFormat,
		D2D1::RectF(MAT * 1, MAT * 5, MAT * 4, MAT * 6),
		pWhiteBrush
	);
	wsprintf(ch, TEXT("%d"), yellow);
	pRT->DrawText(
		ch,
		wcslen(ch),
		pTextFormat,
		D2D1::RectF(MAT * 2, MAT * 8, MAT * 4, MAT * 9),
		pWhiteBrush
	);
	wsprintf(ch, TEXT("%d"), blue);
	pRT->DrawText(
		ch,
		wcslen(ch),
		pTextFormat,
		D2D1::RectF(MAT * 2, MAT * 9, MAT * 4, MAT * 10),
		pWhiteBrush
	);
	wsprintf(ch, TEXT("%d"), red);
	pRT->DrawText(
		ch,
		wcslen(ch),
		pTextFormat,
		D2D1::RectF(MAT * 2, MAT * 10, MAT * 4, MAT * 11),
		pWhiteBrush
	);
}