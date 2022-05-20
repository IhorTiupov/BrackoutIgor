#include "Ball.h" 

Ball::Ball(myConsts::GameArea& playField) : GameItemBase(playField)
{
    setX(myConsts::HORISONT_LENGTH / 2);
    setY(myConsts::START_Y_POSITION);
}

void Ball::draw()
{
    field[getY()][getX()] = 'o';
}

void Ball::clearBall()
{
    field[getY()][getX()] = ' ';
}