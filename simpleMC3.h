#ifndef _SIMPLEMC3_H_
#define _SIMPLEMC3_H_

#include "vanilla2.h"

double simple_MonteCarlo(const VanillaOption& option,
                         double vol,
                         double spot,
                         double rate,
                         unsigned long num_of_paths);
#endif
