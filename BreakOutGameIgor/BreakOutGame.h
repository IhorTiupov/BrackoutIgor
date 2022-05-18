#pragma once
#include <iostream>
#include "GameItemBase.h"
#include "HorisontSide.h"
#include "VerticalSide.h"
#include <vector>


class BreakOutGame
{
public:
    void printMenu();
    void buildGame();

private:
    std::vector<std::vector<char>> gameField { 20, std::vector<char>(20, ' ') };
    //Ball ball;
    //Paddle paddle;
    //Data data;
    HorisontSide downSide;
    HorisontSide upSide;
    //VerticalSide leftSide;
    //VerticalSide rightSide;

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



