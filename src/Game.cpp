#include "Game.hpp"


Game::Game()
	: m_window(sf::VideoMode({ 640, 480 }), "Tetris")
{

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
		m_window.display();
	}
}