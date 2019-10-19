#include "Player.h"
sf::Sprite Player::getSprite()
{
	return sf::Sprite();
}
void Player::update(float dt)
{
	position.x = position.x + 1 * dt;
	position.y = position.y + 1 * dt;
}

void Player::draw(sf::RenderWindow& window)
{
	window.draw(shape);
}
