#pragma once

#include"Monster.h"

class SlimeGreen :public Monster
{
public:
	SlimeGreen() { Init(ID_Slime, 0, 35, 18, 1, 1, TEXT("��ɫʷ��ķ")); }
};

class SlimeRed :public Monster
{
public:
	SlimeRed() { Init(ID_Slime, 1, 45, 20, 2, 2, TEXT("��ɫʷ��ķ")); }
};

class SlimeBlack :public Monster
{
public:
	SlimeBlack() { Init(ID_Slime, 2, 45, 20, 2, 2, TEXT("��ɫʷ��ķ")); }
};