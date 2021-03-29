#include "Player.h"

Player::Player()
{
	x = 16;
	y = 128;
	rect = { (int)x, (int)y, 16, 32 };
}

void Player::moveRight(float pixels)
{
	x += pixels;
}

SDL_Rect *Player::getRect()
{
	return &rect;
}

double Player::getX()
{
	return x;
}