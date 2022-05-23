#pragma once
#include "GameItemBase.h"
#include "HelperGameArguments.h" 

class BricksManeger : public GameItemBase
{
public:
    BricksManeger(myConsts::GameArea& playField);
    void updateGameField() override;
    int bricksCount();
};