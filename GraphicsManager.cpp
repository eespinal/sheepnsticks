#include "GraphicsManager.h"


GraphicsManager::GraphicsManager(void)
{
	this->screen = NULL;
	
	if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
		throw 400;//Bad Request?
	}
}

GraphicsManager::~GraphicsManager(void)
{
	/*for(int i=0;i<this->_lodadedSurfaces.size();++i)
	{
		Surface tmp =lodadedSurfaces[i];
		SDL_FreeSurface(tmp);
	}*/
	SDL_Quit();
}

Surface GraphicsManager::SetScreen(int height, int width, int bpp, int options)
{
	if(this->screen != NULL) SDL_FreeSurface(screen);
	this->screen = SDL_SetVideoMode(width,height,bpp, options);
	//this->lodadedSurfaces.push_back(screen);
	return this->screen;
}

Surface GraphicsManager::LoadImage(string path)
{	
    Surface optimizedImage = NULL;
	Surface loadedImage = SDL_LoadBMP( path.c_str() );
	if(loadedImage != NULL)
	{
		optimizedImage = SDL_DisplayFormat(loadedImage);
//		this->lodadedSurfaces.push_back(optimizedImage);
		SDL_FreeSurface(loadedImage);
	}
	return optimizedImage;
}

void GraphicsManager::OverlapImages( int x, int y, Surface source, Surface destination=NULL )
{
    SDL_Rect offset;
    offset.x = x;
    offset.y = y;
	if(destination == NULL)
		destination = this->screen;
    SDL_BlitSurface( source, NULL, destination, &offset );
}
void GraphicsManager::RefreshScreen()
{
	SDL_Flip(screen);
}

void GraphicsManager::ApplyTransparency(Surface surface, int r, int g, int b)
{
	SDL_SetColorKey(surface, SDL_SRCCOLORKEY | SDL_RLEACCEL, SDL_MapRGB(surface->format, r, g, b));
}