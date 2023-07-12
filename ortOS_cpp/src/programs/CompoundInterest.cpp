// CompoundInterest.hpp.cpp

#include <cstring>
#include "../core/core.hpp"  


class CompoundInterest : public IProgram {
public:
    CompoundInterest() : IProgram("Compound interest", "Calc", "Calculator of compound interest;" ) {}

    void compound_interest()
    {
        float principal, rate, time, result;
        std::cout << "\n\tThe name of the program => [Compound interest]\n" << std::endl;

         std::cout << "Enter principal : ";
         std::cin >> principal;

         std::cout << "Enter rate : ";
         std::cin >> rate;

         std::cout << "Enter time (year) : ";
         std::cin >> time;

        // Calculate compound interest
        result = principal * pow((1 + rate / 100), time);

        std::cout << "Compound interest : " << result <<  std::endl;
    }

    void run() override 
    {
        compound_interest();
    }
};

void registerCompoundInterest(IProgramController& controller) {
    CompoundInterest* program = new CompoundInterest();
    controller.registerProgram(program);
}
