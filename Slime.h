#pragma once

#include"Monster.h"

class SlimeGreen :public Monster
{
public:
	SlimeGreen() { Init(ID_Slime, 0, 35, 18, 1, 1, TEXT("绿色史莱姆")); }
};

class SlimeRed :public Monster
{
public:
	SlimeRed() { Init(ID_Slime, 1, 45, 20, 2, 2, TEXT("红色史莱姆")); }
};

class SlimeBlack :public Monster
{
public:
	SlimeBlack() { Init(ID_Slime, 2, 130, 60, 3, 8, TEXT("黑色史莱姆")); }
};

class SlimeKing :public Monster
{
public:
	SlimeKing() { Init(ID_Slime, 3, 360, 310, 20, 40, TEXT("史莱姆王")); }
};