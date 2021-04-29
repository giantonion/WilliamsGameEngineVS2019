#pragma once
#include "Engine/GameEngine.h"

AnimatedSprite(sf::Vector2f position, int msPerFrame = DEFAULT_MS_PER_FRAME);
const int DEFAULT_MS_PER_FRAME = 40;
void setTexture(sf::Texture& texture);
void addAnimation(std::string name, std::vector<sf::IntRect> frames);
{

}
void playAnimation(std::string name, AnimationMode mode);