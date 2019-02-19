#ifndef RENDER_MANAGER_H
#define RENDER_MANAGER_H

#include <SFML/Graphics.hpp>

#include "../storage/GameObject.h"

struct WindowSettings
{
    std::string name;

    int width;
    int height;
};

const WindowSettings DEFAULT_WINDOW_SETTINGS = {"Default", 800, 600};

class RenderManager
{
 public:
    RenderManager(WindowSettings windowSettings = DEFAULT_WINDOW_SETTINGS);

    void renderDrawableObjects();
    void renderObject(const GameObject& object);

 private:

    sf::RenderWindow windowInstance;
};

#endif