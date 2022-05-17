#pragma once
#include <iostream>
#include "GameItemBase.h"

#include "GameItemBase.h"

class BreakOutGame
{
public:
    void printMenu();
   
    void buildGame();
private:

    void setUserOption();

    void start();
    
    char restart();
   
    char pause();
    
    char exit();
    
    bool stop();

    bool gameOver();
    
};



