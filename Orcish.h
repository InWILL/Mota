#pragma once

#include"Monster.h"

class Orcish :public Monster
{
public:
	Orcish() { Init(ID_Orcish, 0, 260, 85, 5, 22, TEXT("兽人")); }
};

class OrcishWarrior :public Monster
{
public:
	OrcishWarrior() { Init(ID_Orcish, 1, 320, 120, 15, 30, TEXT("兽人武士")); }
};

class Thing :public Monster
{
public:
	Thing() { Init(ID_Orcish, 2, 20, 100, 68, 28, TEXT("石头人")); }
};

class Ghost :public Monster
{
public:
	Ghost() { Init(ID_Orcish, 3, 320, 140, 20, 30, TEXT("幽灵")); }
};