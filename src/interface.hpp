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

/* Colors */
#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

using namespace std;
char version[] = "2.3.3";

void displaymenu()
{ 
    string programs_list[] = {"Menu", "Info", "Guess X", "Compound Interest", "Multiplication of large numbers"};
    std::cout << FCYN("\n[ID] Programs name:") << std::endl;
        for (int i = 0; i < 5; i++)
        {
            std::cout << "[" << i << "] " << programs_list[i] << std::endl;
        }
        cout << endl;
}

void info()
{
    cout << FGRN("\n'Guess X' =>") << " The computer guesses a random number from 0 to 100 and you have to guess it;" << endl;
    cout << FGRN("\n'Compound Interest' =>") << " Calculator that will help calculate the investment;" << endl;
    cout << FGRN("\n'Multiplication of large numbers' =>") << " Calculator that can multiply a number with 100 digits;" << endl;
    cout << endl;
}

#endif