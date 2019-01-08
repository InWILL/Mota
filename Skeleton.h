#pragma once

#include"Monster.h"

class Skeleton :public Monster
{
public:
	Skeleton() { Init(ID_Skeleton, 0, 50, 42, 6, 6, TEXT("������")); }
};

class SkeletonWarrior :public Monster
{
public:
	SkeletonWarrior() { Init(ID_Skeleton, 1, 55, 52, 12, 8, TEXT("����ʿ��")); }
};

class SkeletonCaptain :public Monster
{
public:
	SkeletonCaptain() { Init(ID_Skeleton, 2, 100, 65, 15, 30, TEXT("���öӳ�")); }
};

class GhostWarrior :public Monster
{
public:
	GhostWarrior() { Init(ID_Skeleton, 3, 220, 180, 30, 35, TEXT("��սʿ")); }
};