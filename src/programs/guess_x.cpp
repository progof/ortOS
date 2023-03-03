#include <iostream>
#include <cmath>

int rnd(int a, int b)
{
	return (b - a)* drand48() + a;
}

void guess_x()
{
    int min = 0;
    int max = 100;
    int n, x;

    for (int i = 0; i < 100; ++i)
    {
        x = rnd(min, max);
        std::cout << x << std::endl; 
        std::cout << "Enter the integer:" << std::endl;
        std::cin >> n;
        if(n == x){
            std::cout << "You win, integer: " << n << std::endl;
            break;
        }else{
            std::cout << "Upss... :(" << std::endl;
        }
    } 
}