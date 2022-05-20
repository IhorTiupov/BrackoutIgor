#include "BreakOutGame.h"
#include <iostream>
#include <conio.h>

BreakOutGame::BreakOutGame() : horisontSide(HorisontSide{ gameField }),
    verticalSide(VerticalSide{ gameField }), paddle(Paddle{ gameField }),
    brick(Brick{ gameField }), ball(Ball{ gameField })
    {}

    void BreakOutGame::printMenu()
    {
        system("cls");
        std::cout << "Enter your name: ";
        std::string name;
        std::cin >> name;
        std::cout << " Enter your choice!!! " << std::endl;
        std::cout << " Start game/stop - 's' " << std::endl;
        std::cout << " Pause      - 'p' " << std::endl;
        std::cout << " Exit game  - 'e' " << std::endl;
        setUserOption();
    }

    void BreakOutGame::setUserOption()
    {
        char optionCase = 0;

        while (optionCase == 'e' || 's' || 'p')
        {
            std::cin >> optionCase;

            if (optionCase == 's')
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
            while (isGameContiniue)
            {
                system("cls");
                printField();
                char pressedKey = _getch();
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
                case 'e':
                    exit();
                    break;
                case myConsts::LEFT_MOVE:
                    if (paddle.getX() - 1 > 0)
                    {
                        paddle.setX(paddle.getX() - 1);
                    }
                    paddle.draw();
                    break;
                case myConsts::RIGTH_MOVE:
                    if (paddle.getX() + 1 + myConsts::PADDLE_SIZE < myConsts::HORISONT_LENGTH)
                    {
                        paddle.setX(paddle.getX() + 1);
                    }
                    paddle.draw();
                    break;
                }
                //ball.moveBall();
            }

        }
    }

    void BreakOutGame::buildGame()
    {
        verticalSide.draw();
        horisontSide.draw();
        paddle.draw();
        brick.draw();
        ball.draw();
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
    bool BreakOutGame::gameOver()
    {
        //if(int lives  != 0)
   
        return 0;
    }

    



