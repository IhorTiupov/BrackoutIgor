#pragma once 

#include <memory>
#include <vector> 
#include "HelperGameArguments.h"

class GameItemBase
{
public:
	GameItemBase(myConsts::GameArea& field_);
	virtual void updateGameField() = 0;

	void setCord(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

protected:
	myConsts::GameArea& field_;

private:
	int x_;
	int y_;
};

