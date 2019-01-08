#pragma once

#include"Monster.h"

class Bat :public Monster
{
public:
	Bat() { Init(ID_Bat, 0, 35, 38, 3, 3, TEXT("Ð¡עשענ")); }
};

class BatBig :public Monster
{
public:
	BatBig() { Init(ID_Bat, 1, 60, 100, 8, 12, TEXT("´ףעשענ")); }
};

class BatRed :public Monster
{
public:
	BatRed() { Init(ID_Bat, 2, 200, 390, 90, 50, TEXT("ÎüÑ×עשענ")); }
};

class Vampire :public Monster
{
public:
	Vampire() { Init(ID_Bat, 3, 444, 199, 66, 144, TEXT("ÎüÑ×¹ם")); }
};