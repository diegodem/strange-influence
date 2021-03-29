#pragma once
#include "Scene.h"
#include "Camera.h"
#include "Player.h"

class PlayScene : public Scene
{
public:
	PlayScene() = default;
	PlayScene(SDL_Renderer * renderer);
	bool loadMedia() override;
	void update(Timer deltaTime, std::vector<SDL_Keycode> keysPressed, const Uint8 *keyboardState) override;
	void draw() override;
	void close() override;
private:
	SDL_Texture *backgroundTexture = NULL;
	SDL_Rect backgroundRect;
	Camera camera;
	Timer deltaTime;
	Player player;
};