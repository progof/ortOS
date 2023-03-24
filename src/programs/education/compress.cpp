#include "compress.hpp"

void compress(const char* str)
{
    while(*str)
    {
        int n {1};
        while (*str == *(str+n)) ++n;
        if(n == 1)
        {
            std::cout << *str;
        }else{
            std::cout << "[" << n << *str << "]";
        }
        str += n;
    }
    std::cout << std::endl;
}

void compress_display()
{
    constexpr int MAX_CHARS= 256;
    char str[MAX_CHARS];
    std::cin.width(MAX_CHARS);
    std::cin >> str;

    compress(str);
}