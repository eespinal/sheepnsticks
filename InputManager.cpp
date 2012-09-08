#include "InputManager.h"


InputManager::InputManager(void)
{
}

int InputManager::CheckMovement() {
	SDL_Event keyevent;
	int movement = 0;
	while (SDL_PollEvent(&keyevent)) {
		switch(keyevent.type){
			case SDL_KEYDOWN:
				switch(keyevent.key.keysym.sym) {
					case SDLK_LEFT:
						movement |= DIR_LEFT;
						break;
					case SDLK_RIGHT:
						movement |= DIR_RIGHT;
						break;
					case SDLK_UP:
						movement |= DIR_UP;
						break;
					case SDLK_DOWN:
						movement |= DIR_DOWN;
						break;
				}
			break;
		}
	}
	return movement;
}

InputManager::~InputManager(void)
{
}
