#pragma once

class Scene01 : public Scene
{
private:
	Player* pl;
	Monster* mon;

public:
	virtual void Init() override;
	virtual void Release() override; //����
	virtual void Update() override;
	virtual void LateUpdate() override;//����
	virtual void Render() override;
	virtual void ResizeScreen() override;
};

