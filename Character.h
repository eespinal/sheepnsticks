#pragma once
#include <string>
#include "GraphicsManager.h"
#include "IRenderable.h"
#include "Position.h"
#include "Stage.h"

using namespace std;

class Character : public IRenderable
{
public:
	Character(string path, GraphicsManager *gm);
	~Character(void);
	void setPosition(Position newPosition);
	void setDiection(Direction newDirection);
	bool isStopped();
	bool Move(Direction newDirection, int distance);
	void Stop();
	void Resume();
private:
	Position position;
	//Stage level;
	Direction facingDirection;
	int distanceLeft;
	bool stopped;
};

