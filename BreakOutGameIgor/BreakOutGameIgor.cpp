// BreakOutGameIgor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//#include <string>

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
        char optionCase;
        std::cin >> optionCase;

        if (optionCase == 's')
        {
            start();
        }
        else if(optionCase == 'p')
        {
            pause();
        }
        else if (optionCase == 'e')
        {
            exit();
        }
        else if (optionCase != 'e' || 's' || 'p')
        {
            std::cout << "invalid volue, please try again: - ";
            setUserOption();
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


int main()
{
    BreakOutGame game;
    game.printMenu();

    return 0;
}

