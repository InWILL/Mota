#include"Render.h"
#include"Load.h"
#include"Character.h"
#include"Menu.h"
#include"MapAll.h"

Character braver;
Menu menu;
Map *map[60] = { NULL };
Map **MP = map;

void Render::InitSource()
{
	LoadFile();
	menu.Init();
	map[1] = new Map01;
	map[2] = new Map02;
}

void Render::Paint()
{
	//D2D1_SIZE_F renderTargetSize = pRT->GetSize();
	// Retrieve the size of the bitmap.
	//D2D1_SIZE_F size = bitmap->GetSize();
	//D2D1_POINT_2F upperLeftCorner = D2D1::Point2F(0.f, 0.f);
	// Draw a bitmap.

	pRT->BeginDraw();
	pRT->Clear(D2D1::ColorF(D2D1::ColorF::White));

	pRT->PushLayer(D2D1::LayerParameters(), pLayer);


	menu.Render();
	map[stair]->Render();
	braver.Render();

	pRT->PopLayer();

	pRT->EndDraw();
}

void Render::Move(int direct)
{
	if (!braver.state) return;
	braver.state = false;
	braver.direct = direct;
	int x = X + xx[direct], y = Y + yy[direct];
	if (map[stair]->item[x][y])
	{
		map[stair]->Event(x, y);
		if (map[stair]->item[x][y] && map[stair]->item[x][y]->collide == false)
		{
			braver.state = true;
			return;
		}
	}
	braver.Move(direct);
}