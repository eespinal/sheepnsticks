#pragma once
#include <SDL.h>
#include <string>
#include <map>
#include <vector>
#define Surface SDL_Surface *
using namespace std;


enum ScreenOptions{ SWSURFACE=SDL_SWSURFACE, FULLSCREEN=SDL_FULLSCREEN };

class GraphicsManager
{
public:
	GraphicsManager(void);
	Surface SetScreen(int height, int width, int bpp, int options);
	Surface LoadImage(string path);
	void OverlapImages( int x, int y, Surface source, Surface destination );
	void ApplyTransparency(Surface surface, int r, int g, int b);
	void RefreshScreen();
	~GraphicsManager(void);
private:
	Surface screen;
	Surface backbuffer;
	//vector<Surface> lodadedSurfaces;
};

