#pragma once
#include <vector>
#include "GameItemBase.h" 

class HorisontSide : public GameItemBase
{
public:
	HorisontSide(myConsts::GameArea& playField);
	void draw() override;
};