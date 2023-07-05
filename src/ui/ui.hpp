#ifndef UI_H
#define UI_H

#include "../core/core.hpp"

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

IProgramController controller;

void ui()
{
    system("clear");
    int choice = -1;
    while (choice != 0) {
        std::cout << "\nThis is a personal manager for working with simple programs,\nto run working with the manager, enter '0'\n\n" << std::endl;
        std::cout << "ID | Program name | Description \n" << std::endl;
        controller.displayPrograms();
        std::cout << FMAG("\n[OrtOS] Type id of program to run it # ");
        std::cin >> choice;

        if (choice != 0) {
            controller.runProgram(choice - 1);
            std::cout << std::endl;
        }

        if (choice == 0)
        {
            std::cout << FYEL("\n\tGood bye (>.<)\n") << std::endl;
            exit(0);
        }
    }
} 

#endif