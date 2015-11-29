#ifndef _SIMPLEMC1_H_
#define _SIMPLEMC1_H_
#include "payoff1.h"

double simple_MonteCarlo(const PayOff& the_payoff,
                         double expiry,
                         double vol,
                         double spot,
                         double rate,
                         unsigned long num_of_paths);

#endif
