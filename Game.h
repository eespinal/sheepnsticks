#ifndef GAME_H
#define GAME_H

#define HEIGHT 480
#define WIDTH 640
#define BPP 32
#define FRAMERATE 1.0
#include "SDL.h"
#include "Character.h"
#include "IRenderable.h"
#include "GraphicsManager.h"
#include "InputManager.h"
#include <ctime>
class Game
{
public:
	Game();
	void Update();
	void Refresh();
	bool IsOver();
	~Game(void);
private:
	void Wait(float seconds);
	Surface screen;
	Character *sheep;
	GraphicsManager graphicsManager;
	InputManager inputManager;
};
#endif