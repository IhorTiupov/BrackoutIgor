#pragma once
#include <iostream>
#include "GameItemBase.h"
#include "HorisontSide.h"
#include "VerticalSide.h"
#include "Brick.h"
#include "Paddle.h"
#include "Ball.h"
#include "HelperGameArguments.h"
#include <vector>

class BreakOutGame
{
public:
    BreakOutGame();
    void printMenu();
    void buildGame();
   
private:
    myConsts::GameArea gameField { myConsts::VERTICAL_LENGTH, myConsts::FieldSimbol(myConsts::HORISONT_LENGTH, myConsts::FIELD_SIMBOL) };
    Ball ball;
    Paddle paddle;
    Brick brick;
    //Data data;
    HorisontSide horisontSide;
    VerticalSide verticalSide;
    
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



