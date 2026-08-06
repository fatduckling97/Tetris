#include <iostream>
#include "Resource.hpp"


Resource::Resource()
	: m_textures()
{

}

void Resource::loadTexture(TextureId textureId, const std::string& filename)
{
	auto& texture = m_textures[textureId];

	if (!texture.loadFromFile(filename))
	{
		std::cerr << "Failed to load texture from file: " << filename << std::endl;
		exit(EXIT_FAILURE);
	}
}

sf::Texture& Resource::getTexture(TextureId textureId)
{
	return m_textures[textureId];
}

