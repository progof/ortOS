// MiniProgramController.cpp

#include <iostream>
//#include "IProgramController.hpp"
#include "core/core.hpp"

void IProgramController::registerProgram(IProgram* program) {
    programs.push_back(program);
}

void IProgramController::displayPrograms() {
    int index = 0;
    for (const auto& program : programs) {
        std::cout << index << ". " << program->name << std::endl;
        index++;
    }
}

void IController::runProgram(int index) {
    if (index >= 0 && index < programs.size()) {
        programs[index]->run();
    } else {
        std::cout << "Некорректный индекс программы." << std::endl;
    }
}
