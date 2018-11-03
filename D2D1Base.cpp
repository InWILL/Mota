#include"D2D1Base.h"

ID2D1Bitmap *Bitmap[1000];

void D2D1Base::Initialize()
{
	D2D1CreateFactory(
		D2D1_FACTORY_TYPE_SINGLE_THREADED,
		&pD2DFactory
	);
	RECT rc;
	GetClientRect(hwnd, &rc);
	pD2DFactory->CreateHwndRenderTarget(
		D2D1::RenderTargetProperties(),
		D2D1::HwndRenderTargetProperties(
			hwnd,
			D2D1::SizeU(rc.right - rc.left,rc.bottom - rc.top)
		),
		&pRT
	);

	CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER, __uuidof(pIWICFactory), (LPVOID*)&pIWICFactory);
	pRT->CreateSolidColorBrush(
		D2D1::ColorF(D2D1::ColorF::White),
		&pWhiteBrush
	);

	//Create Layer
	pRT->CreateLayer(NULL, &pLayer);

	//Create a DirectWrite factory
	DWriteCreateFactory(
		DWRITE_FACTORY_TYPE_SHARED,
		__uuidof(pDWriteFactory),
		reinterpret_cast<IUnknown **>(&pDWriteFactory)
	);
	pDWriteFactory->CreateTextFormat(
		TEXT("Verdana"),
		NULL,
		DWRITE_FONT_WEIGHT_NORMAL,
		DWRITE_FONT_STYLE_NORMAL,
		DWRITE_FONT_STRETCH_NORMAL,
		18,
		TEXT(""), //locale
		&pTextFormat
	);
	pTextFormat->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
	pTextFormat->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
}

void D2D1Base::Resize(LPARAM lParam)
{
	if(pD2DFactory)
		pRT->Resize(D2D1::SizeU(LOWORD(lParam), HIWORD(lParam)));
}

void D2D1Base::Clearup()
{
	SafeRelease(&pRT);
	//SafeRelease(&pBlackBrush);
	SafeRelease(&pLayer);
	SafeRelease(&pD2DFactory);
}

HRESULT LoadBitmapFromFile(
	ID2D1RenderTarget *pRenderTarget,
	IWICImagingFactory *pIWICFactory,
	PCWSTR uri,
	UINT destinationWidth,
	UINT destinationHeight,
	ID2D1Bitmap **ppBitmap
)
{
	IWICBitmapDecoder *pDecoder = NULL;
	IWICBitmapFrameDecode *pSource = NULL;
	IWICStream *pStream = NULL;
	IWICFormatConverter *pConverter = NULL;
	IWICBitmapScaler *pScaler = NULL;

	HRESULT hr = pIWICFactory->CreateDecoderFromFilename(
		uri,
		NULL,
		GENERIC_READ,
		WICDecodeMetadataCacheOnLoad,
		&pDecoder
	);
	if (SUCCEEDED(hr))
	{
		// Create the initial frame.
		hr = pDecoder->GetFrame(0, &pSource);
	}
	if (SUCCEEDED(hr))
	{

		// Convert the image format to 32bppPBGRA
		// (DXGI_FORMAT_B8G8R8A8_UNORM + D2D1_ALPHA_MODE_PREMULTIPLIED).
		hr = pIWICFactory->CreateFormatConverter(&pConverter);

	}
	if (SUCCEEDED(hr))
	{
		hr = pConverter->Initialize(
			pSource,
			GUID_WICPixelFormat32bppPBGRA,
			WICBitmapDitherTypeNone,
			NULL,
			0.f,
			WICBitmapPaletteTypeMedianCut
		);
	}
	if (SUCCEEDED(hr))
	{

		// Create a Direct2D bitmap from the WIC bitmap.
		hr = pRenderTarget->CreateBitmapFromWicBitmap(
			pConverter,
			NULL,
			ppBitmap
		);
	}

	SafeRelease(&pDecoder);
	SafeRelease(&pSource);
	SafeRelease(&pStream);
	SafeRelease(&pConverter);
	SafeRelease(&pScaler);

	return hr;
}

void Draw(int ID, int dx, int dy, int x, int y, int divx, int divy)
{
	D2D1_SIZE_F size = Bitmap[ID]->GetSize();
	int MATX = size.width / divx, MATY = size.height / divy;
	pRT->DrawBitmap(
		Bitmap[ID],
		D2D1::RectF(
			dx,
			dy,
			dx + MATX,
			dy + MATY),
		1.0,
		D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(
			x*MATX,
			y*MATY,
			(x + 1)*MATX,
			(y + 1)*MATY)
	);
}

void Draw4(int ID, int dx, int dy, int x, int y, int divx, int divy)
{
	D2D1_SIZE_F size = Bitmap[ID]->GetSize();
	int MATX = size.width / divx, MATY = size.height / divy;
	pRT->DrawBitmap(
		Bitmap[ID],
		D2D1::RectF(
			dx,
			dy,
			dx + MATX,
			dy + MATY),
		1.0,
		D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(
			x*MATX,
			y*MATY,
			(x + 1)*MATX,
			(y + 1)*MATY)
	);
}

void Draw838(int ID, int dx, int dy, int x, int y, int divx, int divy)
{
	D2D1_SIZE_F size = Bitmap[ID]->GetSize();
	int MATX = size.width / divx, MATY = size.height / divy;
	pRT->DrawBitmap(
		Bitmap[ID],
		D2D1::RectF(
			dx,
			dy,
			dx + MATX,
			dy + MATY),
		1.0,
		D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(
			x*MATX,
			y*MATY,
			(x + 1)*MATX,
			(y + 1)*MATY)
	);
}