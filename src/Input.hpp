#pragma once
#include <raylib.h>
#include "Math.hpp"
#include "Utility.hpp"

namespace input {

static void key_bindingT1(vec2d & location, int width, int height, int speedx, int speedy)
{
	if (IsKeyDown(KEY_DOWN) && !(location.y +height >= utility::get_window_height())) {
		location.y += speedy;
	}
	if (IsKeyDown(KEY_UP) && !(location.y <=0))
	{
		location.y -= speedy;
	}
	if (IsKeyDown(KEY_RIGHT)&& !(location.x+width >= utility::get_window_width()))
	{
		location.x += speedx;
	}
	if (IsKeyDown(KEY_LEFT) && !(location.x <=0)) {
		location.x -= speedx;
	}
	if (IsKeyDown(KEY_RIGHT)&& !(location.x+width <= utility::get_window_width()/2))
	{
		location.x -= speedx;
	}

}
}

