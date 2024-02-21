#include "Renderer.h"
#include "../../../View/Graphics/Graphics.h"

Renderer::Renderer() : Component(){
    Graphics::AddRenderer(this);
}

Renderer::~Renderer() {
    Graphics::RemoveRenderer(this);
}

