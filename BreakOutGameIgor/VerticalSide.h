#pragma once
#include "GameItemBase.h"

class VerticalSide : public GameItemBase
{
public:
	VerticalSide(myConsts::GameArea& playField);
	void draw() override;
};