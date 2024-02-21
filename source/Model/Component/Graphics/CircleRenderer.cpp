#include "CircleRenderer.h"

void CircleRenderer::Initialize(float radius) {
    shape = sf::CircleShape(radius);
    shape.setFillColor(sf::Color::Green);
}

void CircleRenderer::Render(sf::RenderTarget &target) {
    target.draw(shape);
}

