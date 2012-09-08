#include "Game.h"


Game::Game()
{
	this->screen = graphicsManager.SetScreen(HEIGHT,WIDTH,BPP,ScreenOptions::SWSURFACE);
	this->sheep = new Character("images/sheep.bmp",&graphicsManager);
}

void Game::Update()
{
	int mov = this->inputManager.CheckMovement();
	if((mov&1)==0)
		this->sheep->Move(NORTH,1);
	if((mov&2)==0)
		this->sheep->Move(SOUTH,1);
	if((mov&4)==0)
		this->sheep->Move(WEST,1);
	if((mov&8)==0)
		this->sheep->Move(EAST,1);
}
void Game::Refresh()
{
	this->Wait(FRAMERATE);
	this->sheep->Render();
	this->graphicsManager.RefreshScreen();
}

void Game::Wait(float seconds)
{
	clock_t startTime=clock(), currTime=startTime;
	seconds *= CLOCKS_PER_SEC;
	do{
		currTime = clock();
	}while( (currTime-startTime) < seconds);
}
bool Game::IsOver()
{
	return false;
}
Game::~Game(void)
{
	delete sheep;
}
