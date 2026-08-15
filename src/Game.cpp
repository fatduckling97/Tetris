#include "../include/Game.hpp"


Game::Game()
	: m_window(sf::VideoMode({ 640, 480 }), "Tetris")
	, m_resources()
{
	m_resources.loadTexture(TextureId::background, "assets/bg.png");
	m_resources.loadTexture(TextureId::ui, "assets/bg-top.png");
	m_resources.loadTexture(TextureId::blocks, "assets/yellow-block.png");

	m_basedBackground.emplace(m_resources.getTexture(TextureId::background));
	m_basedBackground->setPosition({ 0.f, 0.f });

	m_uiBackground.emplace(m_resources.getTexture(TextureId::ui));
	m_uiBackground->setPosition({ 0.f, 100.0f });

	m_yellowBlock.emplace(m_resources.getTexture(TextureId::blocks));
	m_yellowBlock->setPosition({ 0.f, 200.0f });
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
		m_window.draw(*m_uiBackground);
		m_window.draw(*m_yellowBlock);
		m_window.display();
	}
}