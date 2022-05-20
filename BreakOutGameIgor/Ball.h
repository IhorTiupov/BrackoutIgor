#pragma once
#include "GameItemBase.h"
#include "HelperGameArguments.h"

class Ball : public GameItemBase
{
public:
    Ball(myConsts::GameArea& playField);
    void draw() override;
    void clearBall();
};