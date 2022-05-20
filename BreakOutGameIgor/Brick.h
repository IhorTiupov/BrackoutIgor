#pragma once
#include "GameItemBase.h"
#include "HelperGameArguments.h"

class Brick : public GameItemBase
{
public:
	Brick(myConsts::GameArea& playField);
	void draw() override;
};