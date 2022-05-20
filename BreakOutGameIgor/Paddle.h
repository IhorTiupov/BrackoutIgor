#pragma once
#include "GameItemBase.h"
#include "ConstDigit.h"


class Paddle : public GameItemBase
{

public:
	Paddle(myConsts::GameArea& playField);
	void draw() override;
private:
	
	void clearPaddle();
};