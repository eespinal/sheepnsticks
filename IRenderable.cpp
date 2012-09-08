#include "IRenderable.h"

IRenderable::IRenderable(GraphicsManager *graphicsManager)
{
	orientation = 0;
	this->rTransparent=255;
	this->gTransparent=0;
	this->bTransparent=255;
	this->xOffset = 0;
	this->yOffset = 0;
	this->graphicsManager = graphicsManager;
}

void IRenderable::Render()
{
	this->graphicsManager->ApplyTransparency(this->objIco,this->rTransparent,this->gTransparent,this->bTransparent);
	this->graphicsManager->OverlapImages(this->xOffset,this->yOffset,this->objIco,NULL);
}

void IRenderable::setOffset(int x, int y)
{
	this->xOffset = x;
	this->yOffset = y;
}

void IRenderable::setOrientation(int newOrientation)
{
	newOrientation %=360;
	if(inRange(newOrientation,0,359)){
		this->orientation = newOrientation;
	}
}

IRenderable::~IRenderable(void)
{
}
int IRenderable::getOrientation(){
	return this->orientation;
}

