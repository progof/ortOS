#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

#define RST  "\x1B[0m"
#define KBLU  "\x1B[34m"
#define FBLU(x) KBLU x RST

using namespace  std;

void animal_display();

#endif