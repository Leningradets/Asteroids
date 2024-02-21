#ifndef ASTEROIDS_VIEW_H
#define ASTEROIDS_VIEW_H

#include "SFML/Graphics.hpp"
#include "Graphics/Graphics.h"

class View {
public:
    explicit View(sf::RenderWindow &window);
    void Update();

    virtual ~View();

private:
    sf::RenderWindow& window;
    Graphics* graphics;
    void UpdateGraphics();
    void UpdateAudio();
};


#endif //ASTEROIDS_VIEW_H
