
#include "BreakOutGame.h"
#include <vector>

class GameItemBase
{
public:
	virtual void draw()
	{}
	void setCord()
	{}
private:
	std::vector<char> typeWall_;
	int x_;
	int y_;

};