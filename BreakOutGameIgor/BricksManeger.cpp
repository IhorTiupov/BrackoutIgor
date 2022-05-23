#include "BricksManeger.h"

BricksManeger::BricksManeger(myConsts::GameArea& playField) : GameItemBase(playField) {}

void BricksManeger::updateGameField()
{
    for (int i = 1; i < myConsts::BRICK_LENGHT - 1; ++i)
    {
        field_[1][i] = '#';
        field_[2][i] = '#';
    }
}
int BricksManeger::bricksCount()
{
    int count = 0;
    for (auto item : field_[1])
    {
        if (item == '#')
        {
            count++;
        }
    }

    for (auto item : field_[2])
    {
        if (item == '#')
        {
            count++;
        }
    }
    return count;
}