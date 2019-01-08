#pragma once

#include"Monster.h"

class Dragon :public Monster
{
public:
	Dragon() { Init(ID_Dragon, 0, 1500, 600, 250, 800, TEXT("Ä§Áú")); }
};

class Sepia :public Monster
{
public:
	Sepia() { Init(ID_Dragon, 1, 1200, 180, 20, 100, TEXT("´óÎÚÔô")); }
};