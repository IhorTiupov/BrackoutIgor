#pragma once
#include "GameItemBase.h"
#include "ConstDigit.h"


class Ball : public GameItemBase
{

public:
	Ball(myConsts::GameArea& playField);
	void draw() override;

};