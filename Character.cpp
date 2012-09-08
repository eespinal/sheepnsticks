#include "Character.h"


Character::Character(string path, GraphicsManager *gm) : IRenderable(gm)
{
	this->graphicsManager = gm;
	this->objIco = this->graphicsManager->LoadImage(path);
}

Character::~Character(void)
{
	SDL_FreeSurface(objIco);
}

void Character::setPosition(Position newPosition)
{
	this->position = newPosition;
}
void Character::setDiection(Direction newDirection)
{

}
bool Character::isStopped()
{
	return stopped;
}
bool Character::Move(Direction newDirection, int distance)
{
	return false;
}
void Character::Stop()
{
}
void Character::Resume()
{
}