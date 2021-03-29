#pragma once
#include <SDL.h>

class Player
{
public:
	Player();
	void moveRight(float pixels);
	SDL_Rect *getRect();
	double getX();
private:
	double x, y;
	SDL_Rect rect;
};