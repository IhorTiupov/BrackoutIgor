#pragma once
#include "GameItemBase.h"
#include "HelperGameArguments.h"

class Paddle : public GameItemBase
{
public:
	Paddle(myConsts::GameArea& playField);
	void draw() override;
private:
	
	void clearPaddle();
};