#include "Ball.h" 
#include <iostream>

Ball::Ball(myConsts::GameArea& playField) : GameItemBase(playField)
{
    setX(myConsts::START_X_POSITION / 2);
    setY(myConsts::START_Y_POSITION);
}

void Ball::updateGameField()
{
    clearBall();
    moveBall();
    field_[getY()][getX()] = 'o';
}

void Ball::moveBall()
{
    int x = getX();
    int y = getY();

    if (x + incrX < myConsts::HORISONT_LENGTH - 1 && x + incrX > 0)
    {
        x = x + incrX;
    }
    else
    {
        incrX = incrX * (-1);
        x = x + incrX;
    }
    if (y + incrY < myConsts::VERTICAL_LENGTH - 1 && y + incrY > 0)
    {
        y = y + incrY;
    }
    else
    {
        incrY = incrY * (-1);
        y = y + incrY;
    }
    if (field_[y][x] == '#')
    {
        incrY = incrY * (-1);
    }
    if (field_[y][x] == '=')
    {
        incrY = incrY * (-1);
        y -= 1;
    }
    if (field_[y + 1][x] == '_')
    {
        ballIsFallen = true;
    }
    // set ball's coordinate
    setX(x);
    setY(y);
}

void Ball::clearBall()
{
    field_[getY()][getX()] = ' ';
}

bool Ball::isBallFallen()
{
    return ballIsFallen;
}

void Ball::restartBall()
{
    clearBall();
    incrX = 1;
    incrY = -1;
    ballIsFallen = false;
    setX(myConsts::START_X_POSITION / 2);
    setY(myConsts::START_Y_POSITION);
}