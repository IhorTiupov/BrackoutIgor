#include "GameItemBase.h"

void GameItemBase::setCord(int x, int y)
{
	x_ = x;
	y_ = y;
}

GameItemBase::GameItemBase(): x_(0), y_(0)
{
		
}

int   GameItemBase::getX()
{
	return x_;
}
int  GameItemBase::getY()
{
	return y_;
}
void GameItemBase::setX(int x)
{
	x_ = x;
}
void GameItemBase::setY(int y)
{
	y_ = y;
}