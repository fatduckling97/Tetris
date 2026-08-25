#pragma once

#include <SFML/Graphics.hpp>
#include "Board.hpp"


class BoardRenderer {
public:
									BoardRenderer();
	
	void							drawBoard(sf::RenderWindow& window, const Board& board);

private:
	sf::RectangleShape				m_tileShape;
};