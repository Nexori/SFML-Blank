#pragma once
#include <SFML/Graphics.hpp>
#define WIDTH 1400
#define HEIGHT 800
class Player
{
private:
	sf::Texture playerTexture;
	sf::Texture playerSprite;
	sf::CircleShape shape;
public:
	Player() 
	{
		this->hp = 100; 
		this->speedVec = sf::Vector2f(0, 0);
		this->direciton = sf::Vector2f(1, 0);
		this->position = sf::Vector2f(WIDTH/2, 50);
		this->shape = sf::CircleShape(25);
	}
	~Player() {};
	float hp;
	sf::Vector2f position;
	sf::Vector2f speedVec;
	sf::Vector2f direciton;
	sf::Sprite getSprite();
	void update(float dt);
	void draw(sf::RenderWindow& window);
};

