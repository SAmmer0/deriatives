#ifndef _SIMPLEMC2_H_
#define _SIMPLEMC2_H_

#include "vanilla1.h"

double simple_MonteCarlo(const VanillaOption& option,
                         double vol,
                         double spot,
                         double rate,
                         unsigned long num_of_paths);
#endif
