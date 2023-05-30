#include "GameLoop.hpp"
#include "Window.hpp"
#include "Math.hpp"
#include "Ball.hpp"
#include "Paddle.hpp"
#include "Utility.hpp"
#include "AIPaddle.hpp"


void GameLoop::run()
{
    Window win;

	Ball ball{ vec2d (utility::get_window_width()/2, utility::get_window_height()/2), 20.0f, 7};
    Paddle player1{ vec2d(0, utility::get_window_height()/ 2 - 60), 40, 190,10};
    AIPaddle AI{ vec2d(utility::get_window_width()-35, utility::get_window_height() / 2 - 60), 40, 190,2};
    
    while (!win.should_close())
	{

        win.begin_drawing();
        win.draw_fps();
               
        win.clear_background(BLACK);
       DrawLine(utility::get_window_width() / 2, 0, utility::get_window_width() / 2,utility::get_window_height(),  WHITE);

        ball.update();
        player1.update();
        AI.update(); 


        win.end_drawing();
	}
    

}
