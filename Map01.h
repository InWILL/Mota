#pragma once

#include"Map.h"

class Map01 :public Map
{
public:
	Map01() { Init(); }
	void Init();
};

void Map01::Init()
{
	Border();
	item[1][2] = new Wall; item[2][2] = new Wall;
	item[3][2] = new Wall;item[4][2] = new Wall;item[5][2] = new Wall;
	item[6][2] = new Wall;item[7][2] = new Wall;item[8][2] = new Wall;
	item[9][2] = new Wall;item[10][2] = new Wall;item[6][3] = new Wall;
	item[10][3] = new Wall;item[4][4] = new Wall;item[6][4] = new Wall;
	item[10][4] = new Wall;item[1][5] = new Wall; item[3][5] = new Wall;
	item[4][5] = new Wall; item[6][5] = new Wall; item[7][5] = new Wall;
	item[8][5] = new Wall; item[10][5] = new Wall; item[4][6] = new Wall;
	item[10][6] = new Wall; item[4][7] = new Wall; item[6][7] = new Wall;
	item[7][7] = new Wall; item[8][7] = new Wall; item[9][7] = new Wall;
	item[10][7] = new Wall; item[1][8] = new Wall; item[3][8] = new Wall;
	item[4][8] = new Wall; item[4][9] = new Wall; item[5][9] = new Wall;
	item[7][9] = new Wall; item[8][9] = new Wall; item[9][9] = new Wall;
	item[11][9] = new Wall; item[4][10] = new Wall; item[8][10] = new Wall;
	item[4][11] = new Wall; item[8][11] = new Wall;
	item[1][1] = new Upstair; item[3][1] = new SlimeGreen; item[4][1] = new SlimeRed;
	item[5][1] = new SlimeGreen; item[1][3] = new DrugRed; item[4][3] = new DoorYellow;
	item[7][3] = new JewelRed; item[8][3] = new KeyYellow; item[2][4] = new Skeleton;
	item[7][4] = new JewelBlue; item[8][4] = new DrugRed; item[2][5] = new DoorYellow;
	item[9][5] = new DoorYellow; item[1][6] = new KeyYellow; item[6][6] = new DoorYellow;
	item[7][6] = new Bat; item[8][6] = new Wizard; item[9][6] = new Bat;
	item[2][7] = new SkeletonWarrior; item[2][8] = new DoorYellow; item[6][9] = new DoorYellow;
	item[10][9] = new DoorYellow; item[1][10] = new DrugRed; item[3][10] = new KeyYellow;
	item[5][10] = new KeyYellow; item[10][10] = new Bat; item[1][11] = new DrugRed;
	item[2][11] = new Wand; item[3][11] = new KeyYellow; item[9][11] = new SlimeGreen;
	item[10][11] = new DrugBlue; item[11][11] = new SlimeGreen;
}