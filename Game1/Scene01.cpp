#include "stdafx.h"

void Scene01::Init()
{
	pl = new Player();
	mon = new Monster();
}

void Scene01::Release()
{
}

void Scene01::Update()
{
	pl->Update();
	mon->SetTarget(pl->GetPos());
	mon->Update();
}

void Scene01::LateUpdate()
{
	
}

void Scene01::Render()
{
	pl->Render();
	mon->Render();

	//								L    T    R    B
	//DWRITE->RenderText(L"hi", RECT{100, 100, 100, 100}, 300.0f);
	DWRITE->RenderText(L"�ȳ�\n�ȳ�", RECT{ 100, 100, 100,100 }, 20.0f,
		L"�ü�", Color(1.0f, 0.0f, 0.0f, 1.0f), DWRITE_FONT_WEIGHT_BOLD,
		DWRITE_FONT_STYLE_ITALIC);
}

void Scene01::ResizeScreen()
{

}
