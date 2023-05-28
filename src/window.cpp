#include "Window.hpp"
#include <raylib.h>
#include "GameLoop.hpp"

Window::Window(int width, int height, const char* name) : m_width{width}, m_height{height}, m_name{name}
{
	InitWindow(m_width, m_height, m_name);
	SetTargetFPS(60);
	
}

Window::~Window()
{
	CloseWindow();
}

bool Window::should_close()
{
	return WindowShouldClose();
}

int Window::get_width()
{
	return m_width;
}

int Window::get_height()
{
	return m_height;
}

void Window::begin_drawing()
{
	BeginDrawing();
}

void Window::end_drawing()
{
	EndDrawing();
}

void Window::draw_fps()
{
	DrawFPS(10, 10);
}

void Window::clear_background(Color color)
{
	ClearBackground(color);
}





