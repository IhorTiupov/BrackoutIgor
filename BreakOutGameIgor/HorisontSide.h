#pragma once
#include <vector>
#include "GameItemBase.h"


class HorisontSide : public GameItemBase
{
public:
	HorisontSide(std::shared_ptr<std::vector< std::vector<char>> > playField);
	void draw() override;
	HorisontSide();
private:


};