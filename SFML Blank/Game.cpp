#include "Game.h"
Game::Game() : window(sf::VideoMode(WIDTH, HEIGHT), "Arcade Space Game") 
{
	srand(time(NULL));
	this->window.setFramerateLimit(60);
	this->dt = 0;
	arial.loadFromFile("arial.ttf");
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
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		player.speedVec.y -= 150;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) ) {
		player.speedVec.y += 150;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		player.speedVec.x -=150;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		player.speedVec.x += 150;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::C)) { player.speedVec = sf::Vector2f(10, 10); }
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
	std::ostringstream test;
	test <<"dT:\n" << dt << "\nSpeedvec:\n" << player.speedVec.x << "  |  " << player.speedVec.y<< "\nPlayerPos:\n"<<player.position.x<<"  |  "<<player.position.y;
	sf::String temp(test.str());
	sf::Text temphelp(temp, arial, 20);

	window.clear();
	window.draw(temphelp);
	player.draw(window);
	window.display();
}