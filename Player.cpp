#include "Player.h"

Player::Player()
{
	x = 16;
	y = 128;
	vy = 0;
	dy = 800;
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

void Player::update(float deltaTime)
{
	
	y += vy * (double)deltaTime;
	vy += dy * (double)deltaTime;
	if (y >= 128.f)
	{
		y = 128.f;
		vy = 0.f;
	}

	rect.y = (int)y;
}

void Player::jump()
{
	y -= 1;
	vy = -300;
}