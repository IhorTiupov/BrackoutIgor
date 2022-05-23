#pragma once
#include "GameItemBase.h"
#include "HelperGameArguments.h" 

class Ball : public GameItemBase
{
public:
    Ball(myConsts::GameArea& playField);
    void updateGameField() override;
    void clearBall();
    void moveBall();
    void restartBall();
    bool isBallFallen();
private:
    int incrX = 1;
    int incrY = -1;
    bool ballIsFallen = false;
};