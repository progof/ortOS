#include <iostream>
#include <vector>
#include <string>

#include <programs/MiniProgramController.cpp>
#include <core/core.cpp>
#include <ui/ui.cpp>


int main() {
    MiniProgramController controller;

    // Регистрация программ
    // Пример регистрации двух программ: "Hello World" и "Привет, мир!"
    // Предполагается, что у каждой программы есть свой отдельный файл с определением класса и реализацией функции run().

    // Регистрация программы "Hello World"
    extern void registerHelloWorldProgram(MiniProgramController&);
    registerHelloWorldProgram(controller);

    extern void registerBigNumberProgram(MiniProgramController&);
    registerBigNumberProgram(controller);

    void ui();

    return 0;
}
