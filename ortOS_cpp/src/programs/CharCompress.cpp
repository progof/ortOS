// CharCompress.cpp

#include <cstring>
#include "../core/core.hpp"  


class CharCompress : public IProgram {
public:
    CharCompress() : IProgram("Char Compress", "Algo", "Example of character compression;" ) {}

    void compress(const char* str)
    {
        while(*str)
        {
            int n = 1;
            while (*str == *(str+n)) ++n;
            if(n == 1)
            {
                std::cout << *str;
            }else{
                std::cout << FBLU("[" << n << *str << "]");
            }
            str += n;
        }
        std::cout << "\n" << std::endl;
    }

    void run() override 
    {
        std::cout << "\n\tThe name of the program => [Character compression]\n" << std::endl;
        const int MAX_CHARS = 256;
        char str[MAX_CHARS];
        std::cout << "Enter the string: ";
        std::cin.width(MAX_CHARS);
        std::cin >> str;

        compress(str);
    }
};

void registerCharCompress(IProgramController& controller) {
    CharCompress* program = new CharCompress();
    controller.registerProgram(program);
}
