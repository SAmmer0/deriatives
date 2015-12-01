#include "doubleDigit1.h"

DoubleDigit::DoubleDigit(double upper, double lower):
    _upper(upper), _lower(lower)
{
}

double DoubleDigit::operator()(double spot) const
{
    if(spot <= _lower)
        return 0;
    if(spot >= _upper)
        return 0;
    return 1;
}


