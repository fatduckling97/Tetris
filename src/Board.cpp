#include "../include/Board.hpp"


Board::Board()
	: m_boardWidth(10)
	, m_boardHeight(20)
	, m_tile(16)
	, m_tiles()
{

}

Board::~Board()
{

}

TileState Board::getTileState(int x, int y) const
{
	return m_tiles[y * m_boardWidth + x];
}

TileState Board::setTileState(int x, int y, TileState state)
{
	m_tiles[y * m_boardWidth + x] = state;
	return m_tiles[y * m_boardWidth + x];
}

int Board::getTileHeight() const
{
	return m_boardHeight;
}

int Board::getTileWidth() const
{
	return m_boardWidth;
}

int Board::getTileSize() const
{
	return m_tile;
}