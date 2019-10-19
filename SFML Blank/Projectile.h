#pragma once
#include <SFML/Graphics.hpp>
class Projectile
{
private:
	sf::Vector2f speedVec;
public:
	sf::Vector2f getVelocity() { return speedVec; };
	Projectile();
	~Projectile();
	float damage;

};

