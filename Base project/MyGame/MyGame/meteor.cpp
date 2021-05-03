
#include "Meteor.h"
#include "Explosion.h"
const float SPEED = 0.25f;
Meteor::Meteor(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/meteor.png"));
	sprite_.setPosition(pos);
	assignTag("meteor");
	setCollisionCheckEnabled(true);
}
void Meteor::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}
void Meteor::update(sf::Time& elapsed) {
	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();
	if (pos.x < sprite_.getGlobalBounds().width * -1)
	{
		makeDead();
	}
	else
	{
		sprite_.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
	}
}
sf::FloatRect Meteor::getCollisionRect() 
{
	return sprite_.getGlobalBounds();
}   
void Meteor::handleCollision(GameObject& otherGameObject)
{
	sf::Vector2f pos = sprite_.getPosition();
	float x = pos.x;
	float y = pos.y;
	if (otherGameObject.hasTag("laser"))
	{ otherGameObject.makeDead();
	sf::FloatRect bounds = sprite_.getGlobalBounds();
	float explosionX = x + bounds.width;
	float explosionY = y + (bounds.height / 2.0f);
	ExplosionPtr explosion = std::make_shared<Explosion>(sf::Vector2f(explosionX, explosionY));
	GAME.getCurrentScene().addGameObject(explosion);
	}    
	makeDead(); 
}
