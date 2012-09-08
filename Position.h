#ifndef POSITION_H
#define POSITION_H

#include<cmath>

enum Direction{NORTH=0,NORTH_EAST, EAST, SOUTH_EAST,SOUTH,SOUTH_WEST, WEST, NORTH_WEST};

class Position
{
public:
	Position(void);
	~Position(void);
	int DistanceTo(Position p);
	void setX(int x){ if(x>0) this->posX = x;}
	void setY(int y){ if(y>0) this->posY = y;}
	int getX(){return posX;}
	int getY(){return posY;}
private:
	int posX;
	int posY;
};

#endif