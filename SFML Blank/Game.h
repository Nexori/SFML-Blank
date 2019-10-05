#pragma once

#include "SFML/Graphics.hpp"
#define WIDTH 1400
#define HEIGHT 800

class Game
{
public:
	Game();
	void run();
private:
	void processEvents();
	void update();
	void render();
	sf::RenderWindow window;
};

