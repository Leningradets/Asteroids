#ifndef ASTEROIDS_CIRCLERENDERER_H
#define ASTEROIDS_CIRCLERENDERER_H

#include "Renderer.h"

class CircleRenderer : public Renderer{
public:
    void Initialize(float radius);
    void Render(sf::RenderTarget &target) override;
private:
    sf::CircleShape shape;
};


#endif //ASTEROIDS_CIRCLERENDERER_H
