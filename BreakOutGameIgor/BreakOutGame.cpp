
#include "BreakOutGame.h"
#include <iostream>
#include <conio.h>


    void BreakOutGame::printMenu()
    {
        system("cls");
        std::cout << "Enter your name: ";
        std::string name;
        std::cin >> name;
        std::cout << " Enter your choice!!! " << std::endl;

        std::cout << " Start game - 's' " << std::endl;
        std::cout << " Pause      - 'p' " << std::endl;
        std::cout << " Exit game  - 'e' " << std::endl;
        setUserOption();
    }

    void BreakOutGame::buildGame()
    {
       // ball.setCoordinate(10, 20);
        //leftSide.setCord(0, 0);
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
        {
            while (isGameContiniue)
            {
                system("cls");
                printField();
                char pressedKey = getch();
                switch (pressedKey)
                {
                case 'p':
                    pause();
                    break;
                case 's':
                    stop();
                    break;
                }
                //ball.moveBall();
            }

        }
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
        return 0;
    }



