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

	if (mon->getMonsterState() == MonsterState::ATTACK)
	{
		if (TIMER->GetTick(hitTime, 1.0f))
		{
			hitPos = pl->GetPos();
		}
		DWRITE->RenderText(L"10", RECT
			{
			(long)hitPos.x + (long)app.GetHalfWidth() - (long)(35.0f),
			-(long)hitPos.y + (long)app.GetHalfHeight() - (long)(100 * hitTime),
			(long)app.GetWidth(), (long)app.GetHeight()
			},
			30.0f,
			L"kodia", Color(1.0f, 0.0f, 0.0f, 1.0f), DWRITE_FONT_WEIGHT_BOLD,
			DWRITE_FONT_STYLE_ITALIC);
	}
	else
	{
		hitPos = Vector2(5000,
			5000);
		DWRITE->RenderText(L"10", RECT
			{
			5000,
			5000,
			5000,
			5000
			},
			30.0f,
			L"kodia", Color(1.0f, 0.0f, 0.0f, 1.0f), DWRITE_FONT_WEIGHT_BOLD,
			DWRITE_FONT_STYLE_ITALIC);
	}
}

void Scene01::ResizeScreen()
{

}
