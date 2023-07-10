#include "AIPaddle.hpp"

AIPaddle::AIPaddle(const vec2d& position, int width, int height, int speed, DiffcultyType diffculty_level)
	: Paddle(position, width, height, speed), m_level{diffculty_level}
{
	switch (m_level)
	{
	case DiffcultyType::Easy:
		 ai_movement = &AIPaddle::ai_movement_easy;
		 m_speedx = 4.5;
		 m_speedy = 4.5;
		break;
	case DiffcultyType::Medium:
		break;
	case DiffcultyType::Hard:
		break;
	default:
		break;
	}
		
}


void AIPaddle::update(const vec2d&ball_location)
{
	draw(m_location);
	move(ball_location);
}


void AIPaddle::ai_movement_easy(const vec2d&ball_location)
{
	
	if (m_location.y + m_height /2 > ball_location.y /*and !(m_location.y + m_height >= utility::get_window_height()*/)
	{
		m_location.y -= m_speedy;
	}
	if (m_location.y + m_height /2 <= ball_location.y/* and !(m_location.y <= 0)*/)
	{
		m_location.y += m_speedy -2;
	}
	//if (!(m_location.x < utility::get_window_width()/2))
	//{
	//	m_location.x -= m_speedx;
	//}
	//if ((m_location.x + m_width)  < (ball_location.x) &&!(m_location.x < utility::get_window_width()/2) )
	//{
	//	m_location.x += m_speedx;
	//}

}

void AIPaddle::move(const vec2d&ball_location)
{
	(this->*ai_movement)(ball_location);
}

void AIPaddle::reset()
{
	m_location.x = utility::get_window_width() - 35;
	m_location.y = utility::get_window_height() / 2 - 60;
}

