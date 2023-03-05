#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

int GetRandomNumber(int min_num, int max_num)
{
  srand(time(NULL));
  int num = min_num + rand() % (max_num - min_num + 1);
  return num;
}

void guess_x()
{
    int min = 0;
    int max = 100;
    int n, x;

    for ( ; ; )
    {
        x = GetRandomNumber(min, max);

        std::cout << x << std::endl; 
        std::cout << "Enter the integer:" << std::endl;
        std::cin >> n;

        if(n == x)
        {
            std::cout << "You win, integer: " << n << std::endl;
            break;
        }

        if(n != x)
        {
            std::cout << "Upss... :(" << std::endl;
            max = n;
            min = max;
        }

    } 
}