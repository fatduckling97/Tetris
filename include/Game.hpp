#include <SFML/Graphics.hpp>
#include "Resource.hpp"


class Game 
{
public:
										Game();
	void								run();

										~Game();

private:
	sf::RenderWindow					m_window;
	Resource							m_resources;
};