#pragma once
#include <iostream>
#include "GameItemBase.h"
#include "HorisontSide.h"
#include "VerticalSide.h"
#include "Brick.h"
#include "Paddle.h"
#include "Ball.h"
#include "ConstDigit.h"
#include <vector>




class BreakOutGame
{
public:
    BreakOutGame();
    void printMenu();
    void buildGame();
   
private:
    //char simbol;
    
    myConsts::GameArea gameField { myConsts::VERTICAL_LENGTH, std::vector<char>(myConsts::HORISONT_LENGTH, myConsts::FIELD_SIMBOL) };
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
    //void movePaddlLeft();
};  //void movePaddlRigth();



