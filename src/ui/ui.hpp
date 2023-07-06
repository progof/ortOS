#ifndef UI_H
#define UI_H

#include "../core/core.hpp"

IProgramController controller;

void ui()
{
    system("clear");
    int choice = -1;
    std::string version = "2.0.0"; 
    std::cout << FBLU("\n\t\tWelcome to OrtOS manager") << FGRN(" ["<< version << "] ") << std::endl;
    std::cout << "\nThis is a personal manager for working with simple programs,\nto run working with the manager, enter " << FYEL(BOLD("'0'\n\n")) << std::endl;
    std::cout << "ID | Category | Program name | Description \n" << std::endl;
    controller.displayPrograms();
    while (choice != 0) {
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