
#pragma once

#include "Window.h"
#include "Renderer.h"

#include <vector>

class App
{
public:
    static App* Instance();

    std::vector<Window*> Windows;
    int WindowCount;
    virtual void StartMainLoop() = 0;

    Renderer* Rendere;
};
