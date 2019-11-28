#include <iostream>
#include <array>
#include <time.h>

int main()
{
    std::array<bool, 10> tab;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        if (rand() % 2 == 0)
        {
            tab.at(i) = false;
        }
        else
        {
            tab.at(i) = true;
        }
        std::cout << tab.at(i) << " ";
    }
    std::cout << std::endl;
    while (true)
    {
        std::array<bool, 10> newTab;
        newTab.at(0) = tab.at(1) && tab.at(10);
        std::cout << tab.at(0) << " ";
        for (int i = 1; i < 10 - 1; i++)
        {
            newTab.at(i) = tab.at(i - 1) && tab.at(i + 1);
            std::cout << tab.at(i) << " ";
        }
        newTab.at(9) = tab.at(0) && tab.at(8);
        std::cout << tab.at(9) << " " << std::endl;
    }

    return 0;
}