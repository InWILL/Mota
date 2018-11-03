#include"stdafx.h"
#include"Render.h"

HWND hwnd;
DWORD Tick;
int Times=0;
int Timenode = 0;
ID2D1Layer *pLayer = NULL;
ID2D1HwndRenderTarget *pRT = NULL;
IWICImagingFactory *pIWICFactory = NULL;
IDWriteTextFormat *pTextFormat = NULL;
ID2D1SolidColorBrush *pWhiteBrush = NULL;
Render app;

int hp, agg, def, coin, stair;
int yellow, blue, red;
int X, Y;
int book, note, wand, pick, reel, snow, boom, magicKey, holywater, lockcoin, crucifix, knife, wandup, wanddown, wandcore;

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
void CALLBACK TimeFps(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	static TCHAR szAppName[] = TEXT("Mota");
	WNDCLASS wndclass;
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = szAppName;
	if (!RegisterClass(&wndclass))
	{
		MessageBox(NULL, TEXT("ERROR!"), szAppName, MB_ICONERROR);
		return 0;
	}
	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE, szAppName, TEXT("Mota"), WS_VISIBLE | WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		NULL, NULL, hInstance, NULL);
	app.Initialize();
	app.InitSource();
	SetTimer(hwnd, Timenode++, 33, TimeFps);
	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_KEYDOWN:
		switch (wParam)
		{
		case VK_DOWN:
			app.Move(0);
			break;
		case VK_LEFT:
			app.Move(1);
			break;
		case VK_RIGHT:
			app.Move(2);
			break;
		case VK_UP:
			app.Move(3);
			break;
		}
		return 0;
	case WM_CREATE:
		return 0;
	case WM_PAINT:
		app.Paint();
		ValidateRect(hwnd, NULL);
		return 0;
	case WM_SIZE:
		//app.Resize(lParam);
		return 0;
	case WM_DESTROY:
		app.Clearup();
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hwnd, message, wParam, lParam);
}

void CALLBACK TimeFps(HWND hwnd, UINT message, UINT iTimerID, DWORD dwTime)
{
	InvalidateRect(hwnd, NULL, TRUE);
}