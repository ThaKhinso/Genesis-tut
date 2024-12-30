#include "raylib.h"
#include <iostream>

const int WIDTH = 800;
const int HEIGHT = WIDTH / 16 * 10;
char* title = "Genesis";
const int scale = 3;

int main() {
	InitWindow(WIDTH, HEIGHT, title);
	SetTargetFPS(60);
	SetExitKey(KEY_NULL);
	while (!WindowShouldClose()) {
		BeginDrawing();

		DrawText("Your First Window", 800 / 2, 600 / 2, 20, WHITE);

		EndDrawing();
	}
}