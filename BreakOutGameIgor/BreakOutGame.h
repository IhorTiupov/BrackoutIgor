#pragma once
class BreakOutGame
{
public:
    void printMenu()
    {
        system("cls");
        std::cout << "Enter your name: ";
        std::string name;
        std::cin >> name;
        std::cout << " Enter your choice!!! " << std::endl;

        std::cout << " Start game - 's' " << std::endl;
        std::cout << " Pause      - 'p' " << std::endl;
        std::cout << " Exit game  - 's' " << std::endl;
        setUserOption();
    }
private:
    void setUserOption()
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
            else if (optionCase != 'e' || 's' || 'p')
            {
                std::cout << "invalid volue, please try again: - ";
            }
        }
    }
    char start()
    {
        std::cout << " start";
        return 0;
    }
    char restart()
    {
        std::cout << " start";
        return 0;
    }
    char pause()
    {
        std::cout << " pause";
        return 0;
    }
    char exit()
    {
        std::cout << " exit";
        return 0;
    }
    bool stop()
    {
        std::cout << " start";
        return 0;
    }
    bool gameOver()
    {}
};
