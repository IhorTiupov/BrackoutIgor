
#include "Paddle.h"

Paddle::Paddle(myConsts::GameArea& playField) : GameItemBase(playField) {}

void Paddle::draw()
{
    for (int i = 9; i < 11; ++i)
    {
        field[myConsts::VERTICAL_LENGTH-2][i] = '=';
    }

  
} 
//void Paddle::getX()
  