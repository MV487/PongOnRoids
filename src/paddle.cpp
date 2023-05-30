#include "Paddle.hpp"
#include "raylib.h"
#include "Utility.hpp"
Paddle::Paddle(const vec2d& position, int width, int height, int speed) : m_location{ position }, m_width{ width }, m_height { height }, m_speedx{ speed }, m_speedy{ speed }
{
	handle_input = input::key_bindingT1;
}

void Paddle::draw(const vec2d& pos)
{
	DrawRectangle(pos.x, pos.y,m_width, m_height, ORANGE);
}
void Paddle::update()
{
	draw(m_location);
	handle_input(m_location, m_width, m_height, m_speedx, m_speedy);
	
}


