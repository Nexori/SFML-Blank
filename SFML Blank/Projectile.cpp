#include "Projectile.h"

Projectile::Projectile()
{
	this->damage = 0;
	this->speedVec = sf::Vector2f(0, 0);
}

Projectile::~Projectile()
{
}
