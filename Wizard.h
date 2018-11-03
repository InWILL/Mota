#pragma once
#include"Monster.h"

class Wizard :public Monster
{
public:
	Wizard() { Init(ID_Wizard, 0, 60, 32, 8, 5, TEXT("³õ¼¶Î×Ê¦")); }
};