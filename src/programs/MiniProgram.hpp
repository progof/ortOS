// MiniProgram.hpp

#pragma once

#include <string>

class MiniProgram {
public:
    std::string name;
    std::string description;

    MiniProgram(const std::string& name, const std::string& description) : name(name), description(description) {}

    virtual void run() = 0;
};
