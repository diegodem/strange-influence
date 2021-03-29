#pragma once
#include <math.h>

class Camera
{
public:
	Camera();
	void moveRight(float pixels);
	void moveLeft(float pixels);
	int getX();
private:
	float x, y;
};