#ifndef COMPRESS_H
#define COMPRESS_H

#include <iostream>
#include <vector>

#define RST  "\x1B[0m"
#define KBLU  "\x1B[34m"
#define FBLU(x) KBLU x RST

using namespace  std;

void compress(const char* str);
void compress_display();

#endif