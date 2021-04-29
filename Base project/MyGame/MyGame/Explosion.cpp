#include "explosion.h"
Explosion::Explosion(sf::Vector2f pos)
	: AnimatedSprite(pos)
{
	AnimatedSprite::setTexture(GAME.getTextuere("Resources/explosion-spritesheet.png"));
	SetUpExplosionAnimation();
	PlayAnimation("explosion", AnimationMode::OnceForwards);
}
Void Explosion::SetUpExplosionAnimation()
{
	std::vector<sf::IntRect> Frames;
	frames.push_back(sf::IntRect(0, 0, 64, 64));
	frames.push_back(sf::IntRect(64, 0, 64, 64));
	frames.push_back(sf::IntRect(128, 0, 64, 64));
	frames.push_back(sf::IntRect(192, 0, 64, 64));
	frames.push_back(sf::IntRect(256, 0, 64, 64));
	frames.push_back(sf::IntRect(320, 0, 64, 64));
	frames.push_back(sf::IntRect(384, 0, 64, 64));
	frames.push_back(sf::IntRect(448, 0, 64, 64));
	frames.push_back(sf::IntRect(512, 0, 64, 64));


}