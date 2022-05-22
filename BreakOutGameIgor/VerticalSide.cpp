#include "VerticalSide.h"

VerticalSide::VerticalSide(myConsts::GameArea& playField) : GameItemBase(playField) {}

void VerticalSide::updateGameField()
{
    for (int i = 0; i < myConsts::VERTICAL_LENGTH; ++i)
    {
        field_[i][0] = '|';
        field_[i][myConsts::HORISONT_LENGTH - 1] = '|';
    }
}