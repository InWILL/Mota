#pragma once

#include"stdafx.h"
#include"Lava.h"
#include"DoorEx.h"
#include"Treasure.h"
#include"Slime.h"
#include"Skeleton.h"
#include"Bats.h"
#include"Wizard.h"

class Map
{
public:
	virtual void Init()=0;
	virtual void Clearup();
	void Border();
	void Render();
	void Event(int x,int y);
	Item *item[13][13] = { NULL };
};

void Map::Clearup()
{
	delete[] item;
}

void Map::Border()
{
	for (int i = 0; i < 12; i++)
	{
		item[0][i] = new Wall;
		item[i + 1][0] = new Wall;
		item[i][12] = new Wall;
		item[12][i + 1] = new Wall;
	}
}

void Map::Render()
{
	int ux = 5 * MAT, uy = 0;
	for(int i=0;i<13;i++)
		for (int j = 0; j < 13; j++)
		{
			Draw(ID_Tileset, ux+i*MAT, uy+j*MAT, 3, 1,8,38);
			if(item[i][j]!=NULL)
				item[i][j]->Render(ux + i * MAT, uy + j * MAT);
		}
}

void Map::Event(int x,int y)
{
	if (item[x][y])
		item[x][y]->Event(&item[x][y]);
}