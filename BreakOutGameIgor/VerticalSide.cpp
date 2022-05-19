#include "VerticalSide.h"


VerticalSide::VerticalSide(myConsts::GameArea& playField) : GameItemBase(playField) {}

void VerticalSide::draw()
{
    for (int i = 0; i < myConsts::VERTICAL_LENGTH; ++i)
    {
        field[i][0] = '|';
        field[i][myConsts::HORISONT_LENGTH - 1] = '|';
    }
}