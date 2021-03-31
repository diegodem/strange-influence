#pragma once
#include <SDL.h>
#include <stdio.h>

class Player
{
public:
	Player();
	void moveRight(float pixels);
	SDL_Rect *getRect();
	double getX();
	void update(float deltaTime);
	void jump();
private:
	double x, y, vy, dy;
	SDL_Rect rect;
};