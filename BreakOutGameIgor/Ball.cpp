#include "Ball.h"

Ball::Ball(myConsts::GameArea& playField) : GameItemBase(playField) {}

void Ball::draw()
{
    //for (int i = 10; i < myConsts::VERTICAL_LENGTH - 1; ++i)
    //{
        field[17][10] = 'o';
    //}
}