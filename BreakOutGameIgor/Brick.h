#pragma once
#include "GameItemBase.h"
#include "ConstDigit.h"


class Brick : public GameItemBase
{

public:
	Brick(myConsts::GameArea& playField);
	void draw() override;

};