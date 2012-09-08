#include "Position.h"


Position::Position(void)
{
}

int Position::DistanceTo(Position p)
{
	int dx = (this->posX-p.posX);
	int dy = (this->posY-p.posY);
	return (int) sqrt((double) (dx*dx) + (dy*dy) );
}

Position::~Position(void)
{
}
