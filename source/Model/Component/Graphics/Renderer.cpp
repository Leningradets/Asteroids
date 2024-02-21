#include "Renderer.hpp"
#include "../../../View/Graphics/Graphics.hpp"

Renderer::Renderer() : Component(){
    Graphics::AddRenderer(this);
}

Renderer::~Renderer() {
    Graphics::RemoveRenderer(this);
}

