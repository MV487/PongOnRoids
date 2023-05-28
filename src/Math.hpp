#pragma once

struct vec2d {
	int x;
	int y;
	
	vec2d();
	explicit vec2d(int posX, int posY);
	vec2d(const vec2d& rhs);
	const vec2d& operator+=(const vec2d& rhs);
	void operator+=(int magnitude);
	void operator-=(int magnitude);


};

