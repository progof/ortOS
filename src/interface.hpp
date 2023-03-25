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
char version[] = "2.3.1";

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
    cout << "\n'Guess X' => ..." << endl;
    cout << "\n'Compound Interest' => ..." << endl;
    cout << "\n'Multiplication of large numbers' => ..." << endl;
    cout << endl;
}

#endif