#include "Player.h"
sf::Sprite Player::getSprite()
{
	return sf::Sprite();
}
void Player::update(float dt)
{
	position.x = position.x + speedVec.x * dt;
	position.y = position.y + speedVec.y * dt;
	speedVec.x *= 0.85;
	speedVec.y *= 0.85;
	shape.setPosition(position);
}

void Player::draw(sf::RenderWindow& window)
{

	window.draw(shape);
}
