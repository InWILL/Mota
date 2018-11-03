#pragma once
#include"stdafx.h"

extern HWND hwnd;
extern DWORD Tick;
extern int Times;
extern int Timenode;
extern ID2D1Layer *pLayer;
extern ID2D1HwndRenderTarget *pRT;
extern IWICImagingFactory *pIWICFactory;
extern IDWriteTextFormat *pTextFormat;
extern ID2D1SolidColorBrush *pWhiteBrush;
extern ID2D1Bitmap* Bitmap[1000];

extern int hp, agg, def, coin, stair;
extern int yellow, blue, red;
extern int X, Y;
extern int book, note, wand, pick, reel, snow, boom, magicKey, holywater, lockcoin, crucifix, knife, wandup, wanddown, wandcore;

class D2D1Base
{
public:
	void Initialize();
	void Resize(LPARAM lParam);
	void Clearup();
	virtual void Paint()=0;
public:
	ID2D1Factory *pD2DFactory = NULL; // Direct2D factory
	IDWriteFactory *pDWriteFactory = NULL;
	//ID2D1RadialGradientBrush *pRadialGradientBrush = NULL;
};

HRESULT LoadBitmapFromFile(
	ID2D1RenderTarget *pRenderTarget,
	IWICImagingFactory *pIWICFactory,
	PCWSTR uri,
	UINT destinationWidth,
	UINT destinationHeight,
	ID2D1Bitmap **ppBitmap
);

void Draw(int ID, int dx, int dy, int x = 0, int y = 0, int divx = 1, int divy = 1);
void Draw4(int ID, int dx, int dy, int x=0, int y=0, int divx = 4, int divy = 4);
void Draw838(int ID, int dx, int dy, int x = 0, int y = 0, int divx = 8, int divy = 38);