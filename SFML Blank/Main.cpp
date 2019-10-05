#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"
#include "Player.h"

using namespace sf;
int main() {
	Game game;
	game.run();
		////srand(time(NULL));
		//Clock clock;
		//float dt = 0.f;
		////Game loop
		//while (window.isOpen())
		//{
		//	Event event;
		//	while (window.pollEvent(event))
		//	{
		//		if (event.type == Event::Closed)
		//			window.close();
		//		if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
		//			window.close();
		//	}

		//	dt = clock.restart().asSeconds();
}