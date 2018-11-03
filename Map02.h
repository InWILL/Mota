#pragma once

#include"Map.h"

class Map02 :public Map
{
public:
	Map02() { Init(); }
	void Init();
};

void Map02::Init()
{
	Border();
	item[3][1] = new DoorBlue; item[3][2] = new Wall;item[4][2] = new Wall;
	item[5][2] = new Wall;
	item[6][2] = new Wall; item[7][2] = new Wall; item[8][2] = new Wall;
	item[9][2] = new Wall; item[10][2] = new Wall; item[6][3] = new Wall;
	item[10][3] = new Wall; item[4][4] = new Wall; item[6][4] = new Wall;
	item[10][4] = new Wall; item[1][5] = new Wall; item[3][5] = new Wall;
	item[4][5] = new Wall; item[6][5] = new Wall; item[7][5] = new Wall;
	item[8][5] = new Wall; item[10][5] = new Wall; item[4][6] = new Wall;
	item[10][6] = new Wall; item[4][7] = new Wall; item[6][7] = new Wall;
	item[7][7] = new Wall; item[8][7] = new Wall; item[9][7] = new Wall;
	item[10][7] = new Wall; item[1][8] = new Wall; item[3][8] = new Wall;
	item[4][8] = new Wall; item[4][9] = new Wall; item[5][9] = new Wall;
	item[7][9] = new Wall; item[8][9] = new Wall; item[9][9] = new Wall;
	item[11][9] = new Wall; item[4][10] = new Wall; item[8][10] = new Wall;
	item[4][11] = new Wall; item[8][11] = new Wall;
}