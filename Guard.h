#pragma once

#include"Monster.h"

class GuardJunior :public Monster
{
public:
	GuardJunior() { Init(ID_Guard, 0, 50, 48, 22, 12, TEXT("初级卫兵")); }
};

class GuardMiddle :public Monster
{
public:
	GuardMiddle() { Init(ID_Guard, 1, 100, 180, 110, 50, TEXT("中级卫兵")); }
};

class GuardSenior :public Monster
{
public:
	GuardSenior() { Init(ID_Guard, 2, 180, 460, 360, 200, TEXT("高级卫兵")); }
};

class SwordSolder :public Monster
{
public:
	SwordSolder() { Init(ID_Guard, 3, 100, 680, 50, 55, TEXT("双手剑士")); }
};