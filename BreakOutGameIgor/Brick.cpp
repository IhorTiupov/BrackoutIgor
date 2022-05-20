#include "Brick.h"

Brick::Brick(myConsts::GameArea& playField) : GameItemBase(playField) {}

void Brick::draw()
{
    for (int i = 1; i < myConsts::VERTICAL_LENGTH - 1; ++i)
    {
        field[1][i] = '#';
        field[2][i] = '#';
    }
}