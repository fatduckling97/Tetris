#include <SFML/Graphics.hpp>
#include <map>

enum class TextureId
{
	background, 
	ui,
	blocks
};


class Resource
{
public:
													Resource();
	void											loadTexture(TextureId textureId, const std::string& filename);
	sf::Texture&									getTexture(TextureId textureId);

private:
	std::map<TextureId, sf::Texture>				m_textures;
};