#include "compound_interest.hpp"
#include <math.h>

void compound_interest()
{
    float principal, rate, time, result;
    std::cout << "\n\tThe name of the program => [Compound interest]\n" << std::endl;

    std::cout << "Enter principal : ";
    std::cin >> principal;

    std::cout << std::endl
              << "Enter rate : ";
    std::cin >> rate;

    std::cout << std::endl
              << "Enter time (year) : ";
    std::cin >> time;

    // Calculate compound interest
    result = principal * pow((1 + rate / 100), time);

    std::cout << std::endl
              << "Compound interest : " << result << std::endl;
}