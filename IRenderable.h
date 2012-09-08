#pragma once
#include"GraphicsManager.h"
#define inRange(v,min,max) (v>=min && v<=max)
class IRenderable
{
public:
	IRenderable(GraphicsManager *graphicsManager);
	virtual void Render();
	void setOffset(int x, int y);
	void setOrientation(int newOrientation);
	int getOrientation();
	~IRenderable();
protected:
	Surface screen;
	Surface objIco;
	GraphicsManager * graphicsManager;
	int orientation;
	int rTransparent;
	int gTransparent;
	int bTransparent;
	int xOffset;
	int yOffset;
};

