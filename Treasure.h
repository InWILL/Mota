#pragma once
#include"Item.h"

class Treasure :public Item
{
public:
	void Init(int ID){this->ID = ID;}
	void Render(int dx,int dy){Draw(ID, dx, dy);}
private:
	int ID;
};

class KeyYellow :public Treasure
{
public:
	KeyYellow(){Init(ID_KeyYellow);}
	void Event(Item** pItem)
	{
		yellow++;
		Clearup(pItem);
	}
};

class KeyBlue :public Treasure
{
public:
	KeyBlue() { Init(ID_KeyBlue); }
	void Event(Item** pItem)
	{
		blue++;
		Clearup(pItem);
	}
};

class KeyRed :public Treasure
{
public:
	KeyRed() { Init(ID_KeyRed); }
	void Event(Item** pItem)
	{
		red++;
		Clearup(pItem);
	}
};

class DrugRed :public Treasure
{
public:
	DrugRed() { Init(ID_DrugRed); }
	void Event(Item** pItem)
	{
		hp+=100;
		Clearup(pItem);
	}
};

class DrugBlue :public Treasure
{
public:
	DrugBlue() { Init(ID_DrugBlue); }
	void Event(Item** pItem)
	{
		hp += 200;
		Clearup(pItem);
	}
};

class JewelRed :public Treasure
{
public:
	JewelRed() { Init(ID_JewelRed); }
	void Event(Item** pItem)
	{
		agg++;
		Clearup(pItem);
	}
};

class JewelBlue :public Treasure
{
public:
	JewelBlue() { Init(ID_JewelBlue); }
	void Event(Item** pItem)
	{
		def++;
		Clearup(pItem);
	}
};

class Wand :public Treasure
{
public:
	Wand() { Init(ID_Wand); }
	void Event(Item** pItem)
	{
		wand++;
		Clearup(pItem);
	}
};