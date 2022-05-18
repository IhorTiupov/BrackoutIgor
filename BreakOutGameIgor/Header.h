//#pragma once

struct Position
{
	Posution() : mX(0), mY(0) {}
	Posution(const int x, const int y) : mX(x), mY(y) {}
	inline const int& GetX() const;
	inline const int& GetY() const;
	inline void SetX(const int x);
	inline void SetY(const int y);
private:
	int mX;
	int mY;
};

inline const int& Position::GetX() const
{
}