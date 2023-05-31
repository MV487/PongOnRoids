#pragma once
#include "raylib.h"
class Window
{
	static inline constexpr int window_width{ 1920};
	static inline constexpr int window_height{ 1080 };
	static inline const char* window_name{ "PongOnRoids" };
public:
	explicit Window(int width = window_width, int height = window_height, const char* name = window_name);
	~Window();
public:

	bool should_close();
	int get_width();
	int get_height();
	void begin_drawing();
	void end_drawing();
	void draw_fps();
	void clear_background(Color color);
	
	
private:
	int m_width;
	int m_height;
	const char* m_name;

};

