#pragma once
namespace myConsts
{
	const char FIELD_SIMBOL = ' ';
	const int HORISONT_LENGTH = 80;
	const int VERTICAL_LENGTH = 30;
	const int BRICK_LENGHT = HORISONT_LENGTH;
	const int LEFT_MOVE = 75;
	const int RIGTH_MOVE = 77;
	const int PADDLE_SIZE = 5;
	const int START_Y_POSITION = 17;
	const int START_X_POSITION = HORISONT_LENGTH;
	const int BRICKS_COUNT = 156;
	using GameArea = std::vector<std::vector<char>>;
	using FieldSimbol = std::vector<char>;
}
	