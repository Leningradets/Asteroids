#ifndef ASTEROIDS_GRAPHICS_HPP
#define ASTEROIDS_GRAPHICS_HPP

#include <Graphics/RenderWindow.hpp>
#include "../../Model/Component/Graphics/Renderer.hpp"

class Graphics {
public:
    static void Update(sf::RenderWindow& window);
    static void AddRenderer(Renderer *renderer);
    static void RemoveRenderer(Renderer *renderer);

private:
    static std::vector<Renderer*> renderers;
};


#endif //ASTEROIDS_GRAPHICS_HPP
