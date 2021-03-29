#pragma once
#include <SDL.h>

class Player
{
public:
	Player();
	void moveRight(float pixels);
	SDL_Rect *getRect();
	float getX();
private:
	float x, y;
	SDL_Rect rect;
};