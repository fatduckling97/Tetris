#include "../include/BoardRenderer.hpp"


BoardRenderer::BoardRenderer()
	: m_tileShape(sf::Vector2f(16.f, 16.f))
{

}

void BoardRenderer::drawBoard(sf::RenderWindow& window, const Board& board)
{
	for (int y = 0; y < board.getTileHeight(); ++y)
	{
		for (int x = 0; x < board.getTileWidth(); ++x)
		{
			if (board.getTileState(x, y) == TileState::empty)
			{
				m_tileShape.setFillColor(sf::Color::Black);
			}
			else if (board.getTileState(x, y) == TileState::filled)
			{
				m_tileShape.setFillColor(sf::Color::White);
			}

			m_tileShape.setPosition(
				sf::Vector2f(
					static_cast<float>(x * board.getTileSize() + 240),
					static_cast<float>(y * board.getTileSize() + 80)
				)
			);

			window.draw(m_tileShape);
		}
	}
}