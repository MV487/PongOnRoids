#include "Math.hpp"
vec2d::vec2d() : vec2d{0,0}
{
}
vec2d::vec2d(int posX, int posY) : x{posX}, y{posY}
{
}
vec2d::vec2d(const vec2d& rhs)
{
	x = rhs.x;
	y = rhs.y;
}
void vec2d::operator+=(int magnitude) {
		x += magnitude;
		y += magnitude;
	}	
	void vec2d::operator-=(int magnitude) {
		x -= magnitude;
		y -= magnitude;
	}

