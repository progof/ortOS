#include <iostream>
#include <vector>
#include <string>

#include "core/core.hpp"
#include "ui/ui.hpp"


int main() {
   // IProgramController controller;

    extern void registerBigNumberProgram(IProgramController&);
    registerBigNumberProgram(controller);
    
    extern void registerBubbleSortAlgo(IProgramController&);
    registerBubbleSortAlgo(controller);

    extern void registerCharCompress(IProgramController&);
    registerCharCompress(controller);

    extern void registerCompoundInterest(IProgramController&);
    registerCompoundInterest(controller);
    
    ui();

    return 0;
}
