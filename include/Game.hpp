#include <SFML/Graphics.hpp>


class Game 
{
public:
										Game();
	void								run();

										~Game();

private:
	sf::RenderWindow					m_window;
};