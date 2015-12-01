#ifndef _DOUBLEDIGIT1_H_
#define _DOUBLEDIGIT1_H_

#include "payoff1.h"

class DoubleDigit: public PayOff
{
    public:
        DoubleDigit(double upper, double lower);
        virtual double operator()(double spot) const;
        virtual ~DoubleDigit(){}
    private:
        double _upper;
        double _lower;
};
#endif
