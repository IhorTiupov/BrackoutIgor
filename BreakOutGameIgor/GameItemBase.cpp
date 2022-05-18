#include "GameItemBase.h"

void GameItemBase::setCord(int x, int y)
{
	x_ = x;
	y_ = y;
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