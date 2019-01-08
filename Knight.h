#pragma once
#include"Monster.h"

class Warrior :public Monster
{
public:
	Warrior() { Init(ID_Knight, 0, 210, 200, 65, 45, TEXT("սʿ")); }
};

class KnightGold :public Monster
{
public:
	KnightGold() { Init(ID_Knight, 1, 120, 150, 50, 100, TEXT("��ʿ�ӳ�")); }
};

class Knight :public Monster
{
public:
	Knight() { Init(ID_Knight, 2, 160, 230, 105, 65, TEXT("��ʿ")); }
};

class KnightDark :public Monster
{
public:
	KnightDark() { Init(ID_Knight, 3, 180, 430, 210, 120, TEXT("�ڰ���ʿ")); }
};