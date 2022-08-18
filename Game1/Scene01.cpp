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

}

void Scene01::ResizeScreen()
{

}
