#include "Math.hpp"
vec2d::vec2d() : vec2d{0,0}
{
}
vec2d::vec2d(float posX, float posY) : x{posX}, y{posY}
{
}
vec2d::vec2d(const vec2d& rhs)
{
	x = rhs.x;
	y = rhs.y;
}
bool operator==(const vec2d&lhs ,const vec2d& rhs)
{
	return (lhs.x == rhs.x) && (lhs.y == rhs.y);
}

const vec2d& vec2d::operator+=(const vec2d& rhs)
{
	if (*this == rhs)
	{
		return *this;
	}
	x = rhs.x + x;
	y = rhs.y + y;

	
	// TODO: insert return statement here
}
void vec2d::operator+=(int magnitude) {
		x += magnitude;
		y += magnitude;
	}	
	void vec2d::operator-=(int magnitude) {
		x -= magnitude;
		y -= magnitude;
	}

