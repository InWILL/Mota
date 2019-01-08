#pragma once

#include"Monster.h"

class GuardJunior :public Monster
{
public:
	GuardJunior() { Init(ID_Guard, 0, 50, 48, 22, 12, TEXT("��������")); }
};

class GuardMiddle :public Monster
{
public:
	GuardMiddle() { Init(ID_Guard, 1, 100, 180, 110, 50, TEXT("�м�����")); }
};

class GuardSenior :public Monster
{
public:
	GuardSenior() { Init(ID_Guard, 2, 180, 460, 360, 200, TEXT("�߼�����")); }
};

class SwordSolder :public Monster
{
public:
	SwordSolder() { Init(ID_Guard, 3, 100, 680, 50, 55, TEXT("˫�ֽ�ʿ")); }
};