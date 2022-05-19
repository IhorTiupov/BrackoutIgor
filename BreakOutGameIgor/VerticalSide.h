#pragma once
#include <vector>
#include "GameItemBase.h"


class VerticalSide : public GameItemBase
{
public:
	VerticalSide(std::shared_ptr<std::vector< std::vector<char>> > playField);
	void draw() override;
	VerticalSide();
private:


};