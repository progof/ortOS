// OrtOS - Private manager for working with simple programs
// Developmet to start 03/03/2023
#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include "programs/education/guess_x.hpp"
#include "programs/education/mult_big_num.hpp" 
#include "programs/education/compress.hpp" 
#include "programs/finance/compound_interest.hpp"

using namespace std;
char version[] = "2.3.2";

void displaymenu()
{ 
    string programs_list[] = {"Menu", "Info", "Guess X", "Compound Interest", "Multiplication of large numbers"};
    std::cout << "\n[ID] Programs name:" << std::endl;
        for (int i = 0; i < 4; i++)
        {
            std::cout << "[" << i << "] " << programs_list[i] << std::endl;
        }
        cout << endl;
}

void info()
{
    cout << "\n'Guess X' => The computer guesses a random number from 0 to 100 and you have to guess it;" << endl;
    cout << "\n'Compound Interest' => Calculator that will help calculate the investment;" << endl;
    cout << "\n'Multiplication of large numbers' => Calculator that can multiply a number with 100 digits;" << endl;
    cout << endl;
}

#endif