#pragma once
namespace myConsts
{
	const char FIELD_SIMBOL = ' ';
	const int HORISONT_LENGTH = 20;
	const int VERTICAL_LENGTH = 20;
	const int LEFT_MOVE = 75;
	const int RIGTH_MOVE = 77;
	const int PADDLE_SIZE = 3;
	const int START_Y_POSITION = 17;
	//int lives = 3;
	using GameArea = std::vector<std::vector<char>>;
	using FieldSimbol = std::vector<char>;
}
	