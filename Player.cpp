
#include "Player.h"

void Movimiento(Vector2& CirclePlayer, int PlayerVelocity)
{
	if (IsKeyDown(KEY_D))
	{
		CirclePlayer.x += PlayerVelocity * GetFrameTime();
	}
	if (IsKeyDown(KEY_A))
	{
		CirclePlayer.x -= PlayerVelocity * GetFrameTime();
	}
	if (IsKeyDown(KEY_W))
	{
		CirclePlayer.y -= PlayerVelocity * GetFrameTime();
	}
	if (IsKeyDown(KEY_S))
	{
		CirclePlayer.y += PlayerVelocity * GetFrameTime();
	}
}


void Bordes(Vector2& CirclePlayer,int screenWidth,int screenHeight)
{
	if (CirclePlayer.x >= screenWidth)
	{
		CirclePlayer.x = 0;
	}
	else if (CirclePlayer.x <= 0)
	{
		CirclePlayer.x = screenWidth;
	}
	if (CirclePlayer.y >= screenHeight)
	{
		CirclePlayer.y = 0;
	}
	else if (CirclePlayer.y <= 0)
	{
		CirclePlayer.y = screenHeight;
	}
}

