#include <iostream>
#include "Game.h"

void calculator(int x, char a, int y)
{
    switch (a)
    {
    case '+':
        std::cout << x << " + " << y << " = " << x+y << std::endl;
        break;
    case '-':
        std::cout << x << " - " << y << " = " << x-y << std::endl;
        break;
    case '*':
        std::cout << x << " * " << y << " = " << x*y << std::endl;
        break;
    case '/':
        std::cout << x << " / " << y << " = " << x/y << std::endl;
        break;
    default:
        break;
    }
}