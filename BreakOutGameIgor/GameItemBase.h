#pragma once


#include <vector>


class GameItemBase
{
public:
	GameItemBase();
	virtual void draw(std::vector< std::vector<char> >& field) = 0;
	void setCord(int x, int y);
	
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
private:
	int x_;
	int y_;

};


