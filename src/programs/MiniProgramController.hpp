// MiniProgramController.hpp

#pragma once

#include <vector>

class MiniProgram; // Предварительное объявление класса MiniProgram

class MiniProgramController {
private:
    std::vector<MiniProgram*> programs;

public:
    void registerProgram(MiniProgram* program);

    void displayPrograms();

    void runProgram(int index);
};
