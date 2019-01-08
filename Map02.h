#pragma once

#include"Map.h"

void Help()
{

}

class Map02 :public Map
{
public:
	Map02() { Init(); }
	void Init();
};

void Map02::Init()
{
	Border();
	item[1][1] = new Downstair;
	item[3][1] = new DoorBlue; item[3][2] = new Wall;item[4][2] = new Wall;
	item[6][2] = new GuardMiddle; item[8][2] = new GuardMiddle; item[10][2] = new Wall;
	item[11][2] = new Wall; item[2][3] = new Wall; item[3][3] = new Wall;
	item[4][3] = new Wall; item[5][3] = new Wall; item[6][3] = new Wall;
	item[8][3] = new Wall; item[9][3] = new Wall; item[10][3] = new Wall;
	item[11][3] = new Wall; item[2][4] = new Wall; item[3][4] = new KeyYellow;
	item[4][4] = new KeyYellow; item[5][4] = new Wall; item[9][4] = new Wall;
	item[11][4] = new Elder; item[11][4]->EventEx = Help_02;
	item[2][5] = new Wall; item[3][5] = new KeyYellow;item[5][5] = new Cage;
	item[9][5] = new Cage;
	item[2][6] = new Wall; item[3][6] = new Wall; item[4][6] = new Wall;
	item[5][6] = new Wall; item[9][6] = new Wall; item[10][6] = new Wall;
	item[11][6] = new Wall;
	item[2][7] = new Wall;
}

