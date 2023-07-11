// HelloWorldProgram.cpp

#include "../core/core.hpp" 

class HelloWorldProgram : public IProgram {
public:
    HelloWorldProgram() : IProgram("Hello World" , "Test", "Программа, которая выводит на экран приветствие.") {}

    void run() override {
        std::cout << "\n\nHello, World!" << std::endl;
    }
};

void registerHelloWorldProgram(IProgramController& controller) {
    HelloWorldProgram* program = new HelloWorldProgram();
    controller.registerProgram(program);
}
