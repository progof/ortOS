// OrtOS - Private manager for working with simple programs
// Developmet to start 03/03/2023
#include <iostream>
#include "programs/guess_x.cpp"

int main()
{
    system("clear");
    std::cout << "Welcome to OrtOS manager :)" << std::endl; 
    short option;
    std::cout << "\nList of available programs:\n\n1. Game: Guess X\n1. Program #2\n3. Program #3" << std::endl;
    std::cout << "\n[OrtOS] Choose what you want to do ->: ";
    std::cin >> option;

    switch (option)
    {  
    case 1:
        guess_x();
        break;
    case 2:
        std::cout << "\nProgram #2" << std::endl;
        break;
    case 3:
        std::cout << "\nProgram #3" << std::endl;
        break;        
        
    default:
        std::cout << "\n\nError: No such option!!!\n\n" << std::endl;
        break;
    }

    return 0;
} 