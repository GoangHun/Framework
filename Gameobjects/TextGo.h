#pragma once
#include "GameObject.h"
class TextGo :
    public GameObject
{
	
public:
	sf::Text text;
	std::string resourceId;
	TextGo(const string& n = "", const std::string& rId = "");
	virtual ~TextGo() override;

	virtual void SetPosition(const sf::Vector2f& p);
	virtual void SetPosition(float x, float y);

	virtual void SetOrigin(Origins origin);
	virtual void SetOrigin(float x, float y);
	virtual void SetSize(float w, float h);

	virtual void Init() override; //동적 할당(생성자)
	virtual void Release() override; //동적 할당 해제(소멸자)
	virtual void Reset() override;
	virtual void Update(float dt) override;
	virtual void Draw(sf::RenderWindow& window) override;

	void SetText(const std::string& ss, const int& size, sf::Color color, Origins origin, int soltLayer, float x, float y);

};

