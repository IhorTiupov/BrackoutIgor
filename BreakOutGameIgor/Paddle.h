#pragma once
#include "GameItemBase.h"
#include "HelperGameArguments.h"

class Paddle : public GameItemBase
{
public:
	Paddle(myConsts::GameArea& playField);
	void updateGameField() override;
private:
	
	void clearPaddle();
};