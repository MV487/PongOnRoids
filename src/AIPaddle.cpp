#include "AIPaddle.hpp"

AIPaddle::AIPaddle(const vec2d& position, int width, int height, int speed): Paddle(position, width,height,speed)
{

}


void AIPaddle::update()
{
	draw(m_location);
}
