#include "Ball.h" 

Ball::Ball(myConsts::GameArea& playField) : GameItemBase(playField)
{
    setX(myConsts::HORISONT_LENGTH / 2);
    setY(myConsts::START_Y_POSITION);
}

void Ball::draw()
{
    field_[getY()][getX()] = 'o';
}

void Ball::clearBall()
{
    field_[getY()][getX()] = ' ';
}