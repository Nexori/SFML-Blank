#pragma once
#include <SFML/Graphics.hpp>
class Player
{
private:
	sf::Texture playerTexture;
	sf::Texture playerSprite;
public:
	void update(float dt);
	void draw(sf::RenderWindow& window);
};

