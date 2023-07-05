// HelloWorldProgram.cpp

#include <iostream>
#include "IProgramController.hpp"
#include "../core/core.hpp" // Добавлено для полного определения класса MiniProgram

class HelloWorldProgram : public IProgram {
public:
    HelloWorldProgram() : IProgram("Hello World", "Программа, которая выводит на экран приветствие.") {}

    void run() override {
        std::cout << "Hello, World!" << std::endl;
    }
};

void registerHelloWorldProgram(IProgramController& controller) {
    HelloWorldProgram* program = new HelloWorldProgram();
    controller.registerProgram(program);
}
