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

	Ball ball{ vec2d(utility::get_window_width() / 2, utility::get_window_height() / 2), 20.0f, 7 };
	Paddle player1{ vec2d(0, utility::get_window_height() / 2 - 60), 40, 190,10 };
	AIPaddle AI{ vec2d(utility::get_window_width() - 35, utility::get_window_height() / 2 - 60), 40, 190,10, DiffcultyType::Easy };
	std::vector <Paddle> players = {  AI, player1 };
	
	int player_score{};
	int AI_score{};
	while (!win.should_close())
	{

		win.begin_drawing();
		win.draw_fps();


		win.clear_background(BLACK);
		DrawLine(utility::get_window_width() / 2, 0, utility::get_window_width() / 2, utility::get_window_height(), WHITE);

		ball.update();
		player1.update();
		AI.update(ball.get_location());
		ball.check_collision(AI);
		ball.check_collision(player1);
		GameLoop::check_win(ball, player1, AI);

		DrawText(TextFormat("%i", player1.get_score()), 3 * utility::get_window_width() / 4 - 20, 20, 80, WHITE);
		DrawText(TextFormat("%i", AI.get_score()), utility::get_window_width() / 4 - 20, 20, 80, WHITE);
		
		win.end_drawing();


	}
}

void GameLoop::check_win(Ball & ball, Paddle& player, AIPaddle&AI)
{
	if (ball.get_location().x + ball.get_radius() >= GetScreenWidth()) 	{
		
		player.add_score();
		player.reset();
		AI.reset();
		ball.reset_ball();
	}

	if ((ball.get_location().x -  ball.get_radius() <= 0))
	{
		AI.add_score();
		AI.reset();
		player.reset();
		ball.reset_ball();
	}

}
		
	



