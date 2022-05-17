#pragma once

#include "BreakOutGame.h"
#include <vector>

class GameItemBase
{
public:


	virtual void draw() = 0;


	void setCord()
	{}
private:
	std::vector<char> typeWall_;
	int x_;
	int y_;

};


