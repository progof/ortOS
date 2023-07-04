// OrtOS 2.0 04.07.2023

// main.cpp
#include <iostream>
#include <vector>
#include <string>

class MiniProgram {
public:
    std::string name;
    std::string description;

    MiniProgram(const std::string& name, const std::string& description) : name(name), description(description) {}

    virtual void run() = 0;
};

class MiniProgramController {
private:
    std::vector<MiniProgram*> programs;

public:
    void registerProgram(MiniProgram* program) {
        programs.push_back(program);
    }

    void displayPrograms() {
        int index = 0;
        for (const auto& program : programs) {
            std::cout << index << ". " << program->name << std::endl;
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

