#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
int main() {

		//srand(time(NULL));
		const int WINX = 1400;
		const int WINY = 800;
		RenderWindow window(VideoMode(WINX, WINY), "Wingman Game", Style::Default);

		Clock clock;
		float dt = 0.f;

		//Game loop
		while (window.isOpen())
		{
			Event event;
			while (window.pollEvent(event))
			{
				if (event.type == Event::Closed)
					window.close();
				if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
					window.close();
			}

			dt = clock.restart().asSeconds();
		}

		return 0;
}