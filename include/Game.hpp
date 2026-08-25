#pragma once

#include <SFML/Graphics.hpp>
#include <optional>
#include "Resource.hpp"
#include "Board.hpp"
#include "BoardRenderer.hpp"


class Game 
{
public:
										Game();
	void								run();

										~Game();

private:
	sf::RenderWindow					m_window;
	Resource							m_resources;
	Board								m_board;	
	BoardRenderer						m_boardRenderer;

	std::optional<sf::Sprite>			m_basedBackground;
	std::optional<sf::Sprite>			m_uiBackground;
	std::optional<sf::Sprite>			m_yellowBlock;
};