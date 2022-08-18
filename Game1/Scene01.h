#pragma once

class Scene01 : public Scene
{
private:
	Player* pl;
	Monster* mon;
	float	hitTime = 0.0f;
	Vector2 hitPos;
public:
	virtual void Init() override;
	virtual void Release() override; //해제
	virtual void Update() override;
	virtual void LateUpdate() override;//갱신
	virtual void Render() override;
	virtual void ResizeScreen() override;
};

