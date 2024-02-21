#ifndef ASTEROIDS_RENDERER_HPP
#define ASTEROIDS_RENDERER_HPP
#include "SFML/Graphics.hpp"
#include "../Component.hpp"

class Renderer : public Component{
public:
    Renderer();
    virtual ~Renderer();
    virtual void Render(sf::RenderTarget &target) = 0;
};


#endif //ASTEROIDS_RENDERER_HPP
