#include "compress.hpp"

void compress(const char* str)
{
    while(*str)
    {
        int n = 1;
        while (*str == *(str+n)) ++n;
        if(n == 1)
        {
            cout << *str;
        }else{
            cout << FBLU("[" << n << *str << "]");
        }
        str += n;
    }
    cout << "\n" << endl;
}

void compress_display()
{
    cout << "\n\tThe name of the program => [Compress]\n" << endl;
    const int MAX_CHARS = 256;
    char str[MAX_CHARS];
    cout << "Enter the string: ";
    cin.width(MAX_CHARS);
    cin >> str;

    compress(str);
}