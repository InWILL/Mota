#pragma once
#include"Render.h"

void LoadFile()
{
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Tilesets/magictower.png"), 256, 1216, &Bitmap[ID_Tileset]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Characters/016-Braver06.png"), 128, 132, &Bitmap[ID_Braver]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Icons/101-01.png"), 32, 32, &Bitmap[ID_KeyYellow]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Icons/101-02.png"), 32, 32, &Bitmap[ID_KeyBlue]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Icons/101-03.png"), 32, 32, &Bitmap[ID_KeyRed]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Icons/103-05.png"), 32, 32, &Bitmap[ID_DrugRed]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Icons/103-06.png"), 32, 32, &Bitmap[ID_DrugBlue]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Icons/103-01.png"), 32, 32, &Bitmap[ID_JewelRed]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Icons/103-02.png"), 32, 32, &Bitmap[ID_JewelBlue]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Icons/105-03.png"), 32, 32, &Bitmap[ID_Wand]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Characters/202-other02.png"), 128, 128, &Bitmap[ID_Door]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Characters/031-Monster01.png"), 128, 128, &Bitmap[ID_Slime]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Characters/033-Monster03.png"), 128, 128, &Bitmap[ID_Skeleton]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Characters/032-Monster02.png"), 128, 128, &Bitmap[ID_Bat]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Characters/035-Monster05.png"), 128, 128, &Bitmap[ID_Wizard]);
	LoadBitmapFromFile(pRT, pIWICFactory, TEXT("Graphics/Characters/034-Monster04.png"), 128, 128, &Bitmap[ID_Orcish]);
}