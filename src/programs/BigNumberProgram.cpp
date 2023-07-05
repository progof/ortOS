// BigNumberProgram.cpp

#include <iostream>
#include <cstring>
#include "IProgramController.hpp"
#include "../core/core.hpp"  // Добавлено для полного определения класса MiniProgram


class BigNumberProgram : public IProgram {
public:
    BigNumberProgram() : IProgram("Big Number", "Программа, которая выводит на экран приветствие.") {}


       void run() override {
        std::cout << "BigNumber" << std::endl;
        const int MAX_DIGITS = 100; 
        char a[MAX_DIGITS+1], b[MAX_DIGITS+1];
        int result[MAX_DIGITS*2] = {0};

        std::cout << "\n\tThe name of the program => [Multiplication of large numbers]\n" << std::endl;
        std::cout << "Enter the number [a]: ";
        std::cin >> a;
        std::cout << "Enter the number [b]: ";
        std::cin >> b;

        int len_a = strlen(a), len_b = strlen(b);

        int num_a[MAX_DIGITS], num_b[MAX_DIGITS];

        for(int i = 0; i < len_a; i++)
            num_a[i] = a[len_a-1-i] - '0';

        for(int i = 0; i < len_b; i++)
            num_b[i] = b[len_b-1-i] - '0';

        for(int i = 0; i < len_a; i++)
        {
            for(int j = 0; j < len_b; j++)
            {
                result[i+j] += num_a[i] * num_b[j];
                result[i+j+1] += result[i+j] / 10;
                result[i+j] %= 10;
            }
        }

        int len_result = len_a + len_b - 1;
        while(len_result > 0 && result[len_result] == 0)
            len_result--;

        std::cout << "Result(a * b): ";
        for(int i = len_result; i >= 0; i--)
        std::cout << result[i];
        std::cout << std::endl;

    }
};

void registerBigNumberProgram(IProgramController& controller) {
    BigNumberProgram* program = new BigNumberProgram();
    controller.registerProgram(program);
}
