#ifndef INPUTM_H
#define INPUTM_H

#define DIR_UP 1
#define DIR_DOWN 2
#define DIR_LEFT 4
#define DIR_RIGHT 8
#include <SDL.h>


class InputManager
{
public:
	InputManager(void);
	int CheckMovement();
	~InputManager(void);
};

#endif