#include "SDL.h"
#include "Game.h"

int main( int argc, char* args[] )
{
	Game g;
	while(!g.IsOver())
	{
		g.Update();
		g.Refresh();
	}
    return 0;    
}