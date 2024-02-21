#ifndef ASTEROIDS_RENDERER_H
#define ASTEROIDS_RENDERER_H
#include "SFML/Graphics.hpp"
#include "../Component.h"

class Renderer : public Component{
public:
    Renderer();
    virtual ~Renderer();
    virtual void Render(sf::RenderTarget &target) = 0;
};


#endif //ASTEROIDS_RENDERER_H
