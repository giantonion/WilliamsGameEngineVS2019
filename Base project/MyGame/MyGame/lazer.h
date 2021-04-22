#pragma once
#include "Engine/GameEngine.h"

class Lazer : public GameObject
{
public:
	
	void laser(sf::Vector2f pos);

	void draw();
	void update(sf::Time& elapsed);
	sf::FloatRect getCollisionRect();
private:
	sf::Sprite sprite_;
};