// HelloWorldProgram.cpp

#include <iostream>
#include "MiniProgramController.hpp"
#include "MiniProgram.hpp" // Добавлено для полного определения класса MiniProgram

class HelloWorldProgram : public MiniProgram {
public:
    HelloWorldProgram() : MiniProgram("Hello World", "Программа, которая выводит на экран приветствие.") {}

    void run() override {
        std::cout << "Hello, World!" << std::endl;
    }
};

void registerHelloWorldProgram(MiniProgramController& controller) {
    HelloWorldProgram* program = new HelloWorldProgram();
    controller.registerProgram(program);
}
