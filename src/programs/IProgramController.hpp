// IProgramController.hpp

#ifndef IPROGRAMSCONTROLLER_H
#define IPROGRAMSCONTROLLER_H

#include <vector>

class IProgram; 

class IProgramController {
private:
    std::vector<IProgram*> programs;

public:
    void registerProgram(IProgram* program);

    void displayPrograms();

    void runProgram(int index);
};

#endif