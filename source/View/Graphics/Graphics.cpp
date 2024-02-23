#include "Graphics.hpp"
#include "../../Model/Component/Graphics/Renderer.hpp"
#include "../../Model/Time.hpp"

std::vector<Renderer*> Graphics::renderers;

void Graphics::Update(sf::RenderWindow& window) {

    for (auto& renderer : renderers) {
        renderer->Render(window);
    }
}

void Graphics::AddRenderer(Renderer* renderer) {
    renderers.push_back(renderer);
}

void Graphics::RemoveRenderer(Renderer* renderer) {
    auto it = std::find(renderers.begin(), renderers.end(), renderer);
    if (it != renderers.end()) {
        renderers.erase(it);
    }
}
