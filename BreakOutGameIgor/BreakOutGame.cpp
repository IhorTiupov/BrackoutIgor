
#include "BreakOutGame.h"
#include <iostream>


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
        //draw();
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
        std::cout << " start";
        buildGame();

    }

    char BreakOutGame::restart()
    {
        std::cout << " restart";
        return 0;
    }
    char BreakOutGame::pause()
    {
        std::cout << " pause";
        return 0;
    }
    char BreakOutGame::exit()
    {
        std::cout << " exit";
        return 0;
    }
    bool BreakOutGame::stop()
    {
        std::cout << " stop";
        return 0;
    }
    bool BreakOutGame::gameOver()
    {
        return 0;
    }

