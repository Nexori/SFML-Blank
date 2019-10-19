#include "Game.h"
Game::Game() : window(sf::VideoMode(WIDTH, HEIGHT), "Arcade Space Game") 
{
	srand(time(NULL));
	this->window.setFramerateLimit(60);
	this->dt = 0;
}

void Game::run()
{
	while (window.isOpen())
	{
		dt = clock.restart().asSeconds();
		processEvents();
		update(dt);
		render();
	}
}

void Game::processEvents()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || (player.position.y > 0)) {
		player.position.y=-100;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || (player.position.y > HEIGHT)) {
		player.position.y=+100;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || (player.position.x > 0)) {
		player.position.x=-100;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || (player.position.x > WIDTH)) {
		player.position.x=+100;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{ 
	window.close(); 
	std::cout << "[INFO] Window closed";
	}
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {}; //projectile.fire(100);
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed) {
			std::cout << "[INFO] Window closed";
			window.close();
	}
	}
}

void Game::update(float dt)
{
	player.update(dt);
}

void Game::render()
{
	window.clear();
	player.draw(window);
	//draw()

	window.display();
}