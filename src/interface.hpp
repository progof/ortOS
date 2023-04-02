// OrtOS - Private manager for working with simple programs
// Developmet to start 03/03/2023
#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include <array>
#include <ctime>
#include <map>

/* Program category: Education */
#include "programs/education/compress.hpp"
#include "programs/education/mult_big_num.hpp"
/* Program category: Finance */
#include "programs/finance/compound_interest.hpp"
/* Program category: Game */
#include "programs/game/hungry_dog.hpp"
#include "programs/game/guess_x.hpp"

/* Colors */
#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

using namespace std;
char version[] = "4.4.7";

#endif