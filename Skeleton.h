#pragma once

#include"Monster.h"

class Skeleton :public Monster
{
public:
	Skeleton() { Init(ID_Skeleton, 0, 50, 42, 6, 6, TEXT("÷¼÷ÃÈË")); }
};

class SkeletonWarrior :public Monster
{
public:
	SkeletonWarrior() { Init(ID_Skeleton, 1, 55, 52, 12, 8, TEXT("÷¼÷ÃÊ¿±ø")); }
};