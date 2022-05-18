#pragma once
#include <vector>
#include "GameItemBase.h"
//#include "BreakOutGame.h"

class HorisontSide : public GameItemBase
{
public:
	void draw(std::vector< std::vector<char> >& field) override;
	HorisontSide();
private:


};