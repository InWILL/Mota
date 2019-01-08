#pragma once
#include"Monster.h"

class MagicJunior :public Monster
{
public:
	MagicJunior() { Init(ID_Wizard, 0, 60, 32, 8, 5, TEXT("初级法师")); }
};

class MagicSenior :public Monster
{
public:
	MagicSenior() { Init(ID_Wizard, 1,100, 95, 30, 18, TEXT("高级法师")); }
};

class WizardJunior :public Monster
{
public:
	WizardJunior() { Init(ID_Wizard, 2, 220, 370, 110, 80, TEXT("初级巫师")); }
};

class WizardSenior :public Monster
{
public:
	WizardSenior() { Init(ID_Wizard, 3, 200, 380, 130, 90, TEXT("高级巫师")); }
};