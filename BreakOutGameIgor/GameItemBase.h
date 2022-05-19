#pragma once

#include <memory>
#include <vector>


class GameItemBase
{
public:
	GameItemBase();
	GameItemBase(std::shared_ptr<std::vector< std::vector<char>> > field);
	virtual void draw() = 0;
	void setCord(int x, int y);

	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

protected:
	std::shared_ptr<std::vector< std::vector<char>> > field;

private:
	int x_;
	int y_;

};


