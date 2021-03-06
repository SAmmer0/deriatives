#include "payoff1.h"
#include <algorithm>

PayOffCall::PayOffCall(double strike):
    _strike(strike)
{
}

double PayOffCall::operator()(double spot) const
{
    return std::max(spot - _strike, .0);
}

PayOffPut::PayOffPut(double strike):
    _strike(strike)
{
}

double PayOffPut::operator()(double spot) const
{
    return std::max(_strike - spot, .0);
}

