
#include <iostream>
#include "raylib.h"
#include "Player.h"
#include"Enemy.h"

int main(void)
{
	const int screenWidth = 1024;
	const int screenHeight = 768;

	InitWindow(screenWidth, screenHeight, "example");

	int PlayerVelocity = 1000;
	int EnemyVelocity = 500;
	
	Vector2 Enemy = { 50,50 };
	Vector2 CirclePlayer = { screenWidth / 2, screenHeight / 2 };

	while (!WindowShouldClose())
	{
		//Movimiento
		Movimiento(CirclePlayer, PlayerVelocity);

		//Bordes
		Bordes(CirclePlayer, screenWidth, screenHeight);
		
		//Colicion con el Jugador del Enemigo
		EnemyMove(Enemy, CirclePlayer, EnemyVelocity);


		//Dibujo
		BeginDrawing();

		ClearBackground(BLACK);
		DrawCircle(CirclePlayer.x, CirclePlayer.y, 30, RED);
		DrawCircle(Enemy.x, Enemy.y, 30, ORANGE);

		EndDrawing();
	}
	return 0;
}

