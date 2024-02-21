#ifndef ASTEROIDS_CIRCLERENDERER_HPP
#define ASTEROIDS_CIRCLERENDERER_HPP

#include "Renderer.hpp"

class CircleRenderer : public Renderer{
public:
    void Initialize(float radius);
    void Render(sf::RenderTarget &target) override;
private:
    sf::CircleShape shape;
};


#endif //ASTEROIDS_CIRCLERENDERER_HPP
