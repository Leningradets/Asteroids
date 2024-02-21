#ifndef ASTEROIDS_DRAWABLERENDERER_HPP
#define ASTEROIDS_DRAWABLERENDERER_HPP


#include "Renderer.hpp"

class DrawableRenderer : public Renderer{
public:
    DrawableRenderer(sf::Drawable *drawable);
    void Render(sf::RenderTarget &target) override;
private:
    sf::Drawable* drawable;
};


#endif //ASTEROIDS_DRAWABLERENDERER_HPP
