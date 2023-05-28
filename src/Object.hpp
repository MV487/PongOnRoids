#pragma once
#include "Window.hpp"
#include "raylib.h"
#include "Math.hpp"
class Object
{

public:
	virtual void draw(const vec2d&pos) = 0;
	virtual void update() = 0;
};

