#pragma once

#include <SFML/Graphics.hpp>
#include <optional>
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
	std::optional<sf::Sprite>			m_basedBackground;
	std::optional<sf::Sprite>			m_uiBackground;
	std::optional<sf::Sprite>			m_yellowBlock;
};