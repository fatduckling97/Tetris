#include "../include/Game.hpp"


Game::Game()
	: m_window(sf::VideoMode({ 640, 480 }), "Tetris")
	, m_resources()
	, m_board()
{
	m_resources.loadTexture(TextureId::background, "assets/bg.png");
	//m_resources.loadTexture(TextureId::ui, "assets/bg-top.png");
	//m_resources.loadTexture(TextureId::blocks, "assets/yellow-block.png");

	m_resources.getTexture(TextureId::background).setRepeated(true);
	m_basedBackground.emplace(m_resources.getTexture(TextureId::background));
	m_basedBackground->setTextureRect(
		sf::IntRect(
			{ 0, 0 },
			{ 640, 480 }
		)
	);
	//m_basedBackground->setPosition({ 0.f, 0.f });

	//m_uiBackground.emplace(m_resources.getTexture(TextureId::ui));
	//m_uiBackground->setPosition({ 0.f, 100.0f });

	//m_yellowBlock.emplace(m_resources.getTexture(TextureId::blocks));
	//m_yellowBlock->setPosition({ 0.f, 200.0f });

	// TEST GAME BOARD
	//m_board.setTileState(4, 5, TileState::filled);
	//m_board.setTileState(5, 5, TileState::filled);
	//m_board.setTileState(6, 5, TileState::filled);
}

Game::~Game() {

}

void Game::run() 
{
	m_window.setFramerateLimit(60);

	while (m_window.isOpen()) 
	{
		while (const std::optional event = m_window.pollEvent()) 
		{
			if (event->is<sf::Event::Closed>())
				m_window.close();
		}
		m_window.clear();
		m_window.draw(*m_basedBackground);
		//m_window.draw(*m_uiBackground);
		//m_window.draw(*m_yellowBlock);

		m_boardRenderer.drawBoard(m_window, m_board);
		m_window.display();
	}
}