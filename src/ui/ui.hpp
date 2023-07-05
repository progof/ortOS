#ifndef CORE_H
#define CORE_H

#include <iostream>
#include <vector>
#include <string>

#include "programs/IProgramController.hpp"
#include "core/core.hpp"

void ui()
{
  // Основное меню программы
    int choice = -1;
    while (choice != 0) {
        std::cout << "\nThis is a personal manager for working with simple programs,\nto run working with the manager, enter '0'" << std::endl;
        std::cout << "[OrtOS] Type id of program to run it # " << std::endl;
        controller.displayPrograms();
        std::cin >> choice;

        if (choice != 0) {
            controller.runProgram(choice - 1);
            std::cout << std::endl;
        }
    }
} 

#endif