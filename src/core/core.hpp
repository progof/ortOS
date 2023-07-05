// OrtOS 2.0 04.07.2023
#ifndef CORE_H
#define CORE_H

#include <iostream>
#include <vector>
#include <string>

class IProgram {
public:
    std::string name;
    std::string description;

    IProgram(const std::string& name, const std::string& description) : name(name), description(description) {}

    virtual void run() = 0;
};

class IProgramController {
private:
    std::vector<IProgram*> programs;

public:
    void registerProgram(IProgram* program) {
        programs.push_back(program);
    }

    void displayPrograms() {
        int index = 1;
        for (const auto& program : programs) {
            std::cout << index << ". " << program->name << " - " << program->description << std::endl;
            index++;
        }
    }

    void runProgram(int index) {
        if (index >= 0 && index < programs.size()) {
            programs[index]->run();
        } else {
            std::cout << "Некорректный индекс программы." << std::endl;
        }
    }
};

#endif