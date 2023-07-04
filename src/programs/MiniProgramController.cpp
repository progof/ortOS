// MiniProgramController.cpp

#include <iostream>
#include "MiniProgramController.hpp"
#include "MiniProgram.hpp"

void MiniProgramController::registerProgram(MiniProgram* program) {
    programs.push_back(program);
}

void MiniProgramController::displayPrograms() {
    int index = 0;
    for (const auto& program : programs) {
        std::cout << index << ". " << program->name << std::endl;
        index++;
    }
}

void MiniProgramController::runProgram(int index) {
    if (index >= 0 && index < programs.size()) {
        programs[index]->run();
    } else {
        std::cout << "Некорректный индекс программы." << std::endl;
    }
}
