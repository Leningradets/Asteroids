#ifndef ASTEROIDS_DRAWABLERENDERER_H
#define ASTEROIDS_DRAWABLERENDERER_H


#include "Renderer.h"

class DrawableRenderer : public Renderer{
public:
    DrawableRenderer(sf::Drawable *drawable);
    void Render(sf::RenderTarget &target) override;
private:
    sf::Drawable* drawable;
};


#endif //ASTEROIDS_DRAWABLERENDERER_H
