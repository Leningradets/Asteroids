#ifndef ASTEROIDS_VIEW_HPP
#define ASTEROIDS_VIEW_HPP

#include "SFML/Graphics.hpp"
#include "Graphics/Graphics.hpp"

class View {
public:
    explicit View(sf::RenderWindow &window);
    void Update();

    virtual ~View();

private:
    sf::RenderWindow& window;
    void UpdateGraphics();
    void UpdateAudio();

    sf::Shader shader;
    sf::RectangleShape shape;
};


#endif //ASTEROIDS_VIEW_HPP
