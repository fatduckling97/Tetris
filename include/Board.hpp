#pragma once

#include <SFML/Graphics.hpp>
#include <array>


enum class TileState
{
	empty, 
	filled
};


class Board
{
public:
									Board();
									~Board();

TileState							getTileState(int x, int y) const;
TileState							setTileState(int x, int y, TileState state);

int									getTileWidth() const;
int									getTileHeight() const;
int 								getTileSize() const;


private:
	int								m_boardWidth;
	int								m_boardHeight;
	int								m_tile;

	std::array<TileState, 200>		m_tiles;

};
