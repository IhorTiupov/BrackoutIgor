#include "VerticalSide.h"



VerticalSide::VerticalSide() : GameItemBase() {}

VerticalSide::VerticalSide(std::shared_ptr<std::vector< std::vector<char>> > playField) : GameItemBase(playField) {}

void VerticalSide::draw()
{
	int i = 0;
	(*field)[i][0] = '|';
}