#pragma once
#include"Monster.h"

class Warrior :public Monster
{
public:
	Warrior() { Init(ID_Knight, 0, 210, 200, 65, 45, TEXT("战士")); }
};

class KnightGold :public Monster
{
public:
	KnightGold() { Init(ID_Knight, 1, 120, 150, 50, 100, TEXT("骑士队长")); }
};

class Knight :public Monster
{
public:
	Knight() { Init(ID_Knight, 2, 160, 230, 105, 65, TEXT("骑士")); }
};

class KnightDark :public Monster
{
public:
	KnightDark() { Init(ID_Knight, 3, 180, 430, 210, 120, TEXT("黑暗骑士")); }
};