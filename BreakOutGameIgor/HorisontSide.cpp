#include "HorisontSide.h"

HorisontSide::HorisontSide(myConsts::GameArea& playField) : GameItemBase(playField) {}

void HorisontSide::draw()
{
    for (int i = 0; i < myConsts::HORISONT_LENGTH; ++i)
    {
        field_[0][i] = '-';
        field_[myConsts::VERTICAL_LENGTH - 1][i] = '-';
    }
}