#include <iostream>
#include <vector>
#include <string>

#include "core/core.hpp"
#include "ui/ui.hpp"


int main() {
   // IProgramController controller;
   
    extern void registerHelloWorldProgram(IProgramController&);
    registerHelloWorldProgram(controller);

    extern void registerBigNumberProgram(IProgramController&);
    registerBigNumberProgram(controller);
    
    extern void registerBubbleSortAlgo(IProgramController&);
    registerBubbleSortAlgo(controller);

    ui();

    return 0;
}
