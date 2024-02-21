#include "DrawableRenderer.hpp"

DrawableRenderer::DrawableRenderer(sf::Drawable *drawable) : Renderer(){
    this->drawable = drawable;
}

void DrawableRenderer::Render(sf::RenderTarget &target) {
    sf::Transform transform;
    transform.translate(gameObject->transform->position.x, gameObject->transform->position.y);
    transform.rotate(gameObject->transform->rotation * 57.29578);
    sf::RenderStates states;
    states.transform = transform;
    target.draw(*drawable, states);
}
