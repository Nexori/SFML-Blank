#pragma once
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Graphics.hpp"
#include "Player.h"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
using namespace sf;
class Game
{
public:
	Game();
	void run();
	sf::Clock clock;
	sf::Font arial;
	double dt;
private:
	Player player;
	void processEvents();
	void update(float dt);
	void render();
	sf::RenderWindow window;


};

