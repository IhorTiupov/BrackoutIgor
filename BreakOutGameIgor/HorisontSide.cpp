#include "HorisontSide.h"




HorisontSide::HorisontSide() : GameItemBase() {}

HorisontSide::HorisontSide(std::shared_ptr<std::vector< std::vector<char>> > playField) : GameItemBase(playField) {}

void HorisontSide::draw()
{
	int i = 0;
	(*field)[0][i] = '*';
}