#include "Player.h"


void EnemyMove(Vector2& Enemy ,Vector2 CirclePlayer, int EnemyVelocity)
{
	if (!CheckCollisionCircles(CirclePlayer, 30, Enemy, 30))
	{
		if (Enemy.x != CirclePlayer.x)
		{
			if (Enemy.x > CirclePlayer.x)
			{
				Enemy.x -= EnemyVelocity * GetFrameTime();
			}
			else
			{
				Enemy.x += EnemyVelocity * GetFrameTime();
			}


		}

		if (Enemy.y != CirclePlayer.y)
		{
			if (Enemy.y > CirclePlayer.y)
			{
				Enemy.y -= EnemyVelocity * GetFrameTime();
			}
			else
			{
				Enemy.y += EnemyVelocity * GetFrameTime();
			}


		}
	}
}