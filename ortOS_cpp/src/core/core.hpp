// OrtOS 2.0 04.07.2023
#ifndef CORE_H
#define CORE_H

#include <iostream>
#include <vector>
#include <string>

/* Config */

// Colors 
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

extern std::string version;

class IProgram {
public:
    std::string name;
    std::string category;
    std::string description;

    IProgram(const std::string& name, const std::string& category, const std::string& description) : name(name), category(category), description(description) {}

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
        std::cout << FYEL("0. Exit") << std::endl;
        for (const auto& program : programs) {
            std::cout << index << ". " << program->name << " | " << program->category << " |" << " - " << program->description << std::endl;
            index++;
        }
    }

    void runProgram(int index) {
        if (index >= 0 && index < programs.size()) {
            programs[index]->run();
        } else {
            std::cout << FRED("\n\nError: Incorrect program index.") << std::endl;
        }
    }
};

#endif