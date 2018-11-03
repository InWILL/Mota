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