#pragma once 

#include <memory>
#include <vector> 
#include "ConstDigit.h"

class GameItemBase
{
public:
	GameItemBase(myConsts::GameArea& field);
	virtual void draw() = 0;

	void setCord(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

protected:
	myConsts::GameArea& field;

private:
	int x_;
	int y_;
};

