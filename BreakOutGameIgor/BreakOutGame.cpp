#include "BreakOutGame.h"
#include "HelperGameArguments.h"
#include <iostream>
#include <conio.h>
#include <thread>
#include <chrono> 

BreakOutGame::BreakOutGame() : horisontSide(HorisontSide{ gameField }),
verticalSide(VerticalSide{ gameField }), paddle(Paddle{ gameField }),
bricksManeger(BricksManeger{ gameField }), ball(Ball{ gameField }), startTime_(clock())
{}

void BreakOutGame::printMenu()
{
    system("cls");
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << " Enter your choice!!! " << std::endl;
    std::cout << " Begin game      - 'b' " << std::endl;
    std::cout << " Stop game       - 's' " << std::endl;
    std::cout << " Pause           - 'p' " << std::endl;
    setUserOption();
}

void BreakOutGame::setUserOption()
{
    char optionCase = 0;

    while (optionCase == 'e' || 'b' || 'p')
    {
        std::cin >> optionCase;

        if (optionCase == 'b')
        {
            start();
            break;
        }
        else if (optionCase == 'p')
        {
            pause();
            break;
        }
        else if (optionCase == 'e')
        {
            exit();
            break;
        }
        else
        {
            std::cout << "invalid volue, please try again: - ";
        }
    }
}

void BreakOutGame::start()
{
    buildGame();
    {
        char pressedKey = ' ';
        while (isGameContiniue)
        {
            if (bricksManeger.bricksCount() == 0)
            {
                isGameContiniue = false;
                std::cout << " YOU ARE WINNER " << std::endl;
                continue;
            }
            if (lives_ == 0)
            {
                isGameContiniue = false;
                std::cout << " GAME OVER " << std::endl;
                std::cout << " press any key " << std::endl;
                system("pause");
                printMenu();
                break;
            }
            if (ball.isBallFallen())
            {
                lives_ = lives_ - 1;
                ball.restartBall();
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(2));
            system("cls");
            printGameData();
            printField();
            ball.updateGameField();
            if (_kbhit())
            {
                pressedKey = _getch();
                switch (pressedKey)
                {
                case 'p':
                    pause();
                    break;
                case 's':
                    stop();
                    break;
                case 'r':
                    restart();
                    break;
                case myConsts::LEFT_MOVE:
                    if (paddle.getX() - 1 > 0)
                    {
                        paddle.setX(paddle.getX() - 2);
                    }
                    paddle.updateGameField();
                    break;
                case myConsts::RIGTH_MOVE:
                    if (paddle.getX() + 1 + myConsts::PADDLE_SIZE < myConsts::HORISONT_LENGTH)
                    {
                        paddle.setX(paddle.getX() + 2);
                    }
                    paddle.updateGameField();
                    break;
                }
            }
        }
    }
}

void BreakOutGame::buildGame()
{
    lives_ = 3;
    startTime_ = clock();
    verticalSide.updateGameField();
    horisontSide.updateGameField();
    paddle.updateGameField();
    bricksManeger.updateGameField();
    ball.updateGameField();
}

void BreakOutGame::printField()
{
    for (const auto& line : gameField)
    {
        for (const auto& simbol : line)
        {
            std::cout << simbol;
        }
        std::cout << std::endl;
    }
}

void BreakOutGame::timer()
{
    auto sec = (clock() - startTime_) / CLOCKS_PER_SEC;
    std::cout << "Timer: " << sec << std::endl;
}

void BreakOutGame::restart()
{
    std::cout << " restart";
    start();
}

void BreakOutGame::pause()
{
    std::cout << " pause";
    system("pause");
}

void BreakOutGame::exit()
{
    std::cout << " exit";

}

void BreakOutGame::stop()
{
    std::cout << " stop";
    isGameContiniue = false;
}

void BreakOutGame::printGameData()
{
    std::cout << "Lives is:" << lives_ << std::endl;
    std::cout << "Score is " << myConsts::BRICKS_COUNT - bricksManeger.bricksCount() << std::endl;
    timer();
}

