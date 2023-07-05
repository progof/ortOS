#include <iostream>
#include <vector>
#include <string>

//#include "programs/IProgramController.hpp"
#include "core/core.hpp"
#include "ui/ui.hpp"


int main() {
    IProgramController controller;

    // Регистрация программ
    // Пример регистрации двух программ: "Hello World" и "Привет, мир!"
    // Предполагается, что у каждой программы есть свой отдельный файл с определением класса и реализацией функции run().

    // Регистрация программы "Hello World"
    extern void registerHelloWorldProgram(IProgramController&);
    registerHelloWorldProgram(controller);

    extern void registerBigNumberProgram(IProgramController&);
    registerBigNumberProgram(controller);

    void ui();

    return 0;
}
