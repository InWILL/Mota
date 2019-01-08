#pragma once
#include"Monster.h"

class Zeno :public Monster
{
public:
	Zeno() { Init(ID_Magic, 0, 8000, 5000, 1000, 500, TEXT("魔王")); }
};

class ZenoEx :public Monster
{
public:
	ZenoEx() { Init(ID_Magic, 0, 8000, 1580, 190, 0, TEXT("魔王")); }
};

class Sergeant :public Monster
{
public:
	Sergeant() { Init(ID_Magic, 1, 230, 450, 100, 100, TEXT("魔法警卫")); }
};

class MagicMaster :public Monster
{
public:
	MagicMaster() { Init(ID_Magic, 2, 4500, 560, 310, 1000, TEXT("大法师")); }
};