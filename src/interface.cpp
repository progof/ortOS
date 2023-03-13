// OrtOS - Private manager for working with simple programs
// Developmet to start 03/03/2023
#include "interface.hpp"

int main()
{
    system("clear");
    std::cout << "Welcome to OrtOS manager [" << version << "]" << std::endl;
    short option;
    do
    {    
        std::cout << "\nList of available programs:\n\n0. Exit\n1. Game: Guess X\n2. Finance: Compound Interest\n3. Program #3" << std::endl;
        std::cout << "\n[OrtOS] Choose what you want to do: ";
        std::cin >> option;

        switch (option)
        {
        case 0:
            break;   
        case 1:
            guess_x();
            continue;
        case 2:
            compound_interest();
            continue;
        case 3:
            std::cout << "\nProgram #3" << std::endl;
            continue;
        default:
            std::cout << "\n\nError: No such option!!!\n\n" << std::endl;
            continue;
        }
    } while (option != 0);

    return 0;
}