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

void print_star(int size)
{
    std::cout << "star size = " << size << std::endl;
    for (int i = 1; i <= size; i ++)
    {
        for (int j = 1; j <= i; j ++)
        {
            std:: cout << "*";
        }
        std::cout << std::endl;
    }
}

void ninenine_table(int target, int start_at_zero)
{
    if (start_at_zero)
    {
        for (int i = 1; i <= 9; i ++)
        {
            for (int j = 1; j <= target; j ++)
            {
                if (i*j < 10)
                    std::cout << j << "X" << i << "=0" << i*j << '\t';
                else
                    std::cout << j << "X" << i << "=" << i*j << '\t';
            }
            std::cout << std::endl;
        }
    }
    else
    {
        for (int i = 1; i <= 9; i ++)
        {
            if (target*i < 10)
                std::cout << target << "X" << i << "=0" << target*i << std::endl;
            else
                std::cout << target << "X" << i << "=" << target*i << std::endl;
        }
    }
    
}