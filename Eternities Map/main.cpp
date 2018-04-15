#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

#define SCREEN_WIDTH 1400
#define SCREEN_HEIGHT 900

int main()
{
	// TODO: Test unit test

	RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Eternities Map");

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
				break;
			}
		}

		window.clear();
		window.display();
	}


	return 0;
}