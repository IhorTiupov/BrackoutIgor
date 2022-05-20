#include "Paddle.h"

Paddle::Paddle(myConsts::GameArea& playField) : GameItemBase(playField)
{
    setX(myConsts::HORISONT_LENGTH / 2);
}

void Paddle::draw()
{
    int position = getX();
    clearPaddle();
    for (int i = position; i < position + 3; ++i)
    {
        field[myConsts::VERTICAL_LENGTH - 2][i] = '=';
    }
}

void Paddle::clearPaddle()
{
    for (int i = 1; i < 19; ++i)
    {
        field[myConsts::VERTICAL_LENGTH - 2][i] = ' ';
    }
}

  