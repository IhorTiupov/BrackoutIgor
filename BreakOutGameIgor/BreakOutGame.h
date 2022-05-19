#pragma once
#include <iostream>
#include "GameItemBase.h"
#include "HorisontSide.h"
#include "VerticalSide.h"
#include "ConstDigit.h"
#include <vector>


class BreakOutGame
{
public:
    BreakOutGame() : downSide(HorisontSide{ std::make_shared<std::vector<std::vector<char>> >(gameField) }),
        upSide(HorisontSide{ std::make_shared<std::vector<std::vector<char>> >(gameField) }),
        leftSide(VerticalSide{ std::make_shared<std::vector<std::vector<char>> >(gameField) }),
        rightSide(VerticalSide{ std::make_shared<std::vector<std::vector<char>> >(gameField) })
    {}
    void printMenu();
    void buildGame();

private:
    //char simbol;
    std::vector<std::vector<char>> gameField { myConsts::VERTICAL_LENGTH, std::vector<char>(myConsts::HORISONT_LENGTH, ' ') };
    //Ball ball;
    //Paddle paddle;
    //Data data;
    HorisontSide downSide;
    HorisontSide upSide;
    VerticalSide leftSide;
    VerticalSide rightSide;

    bool isGameContiniue = true;
    void setUserOption();
    void start();
    void timer();
    void restart();
    void pause();
    void exit();
    void stop();
    bool gameOver();
    void printField();
  
};



