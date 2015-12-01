#include "vanilla1.h"

VanillaOption::VanillaOption(PayOff& payoff, double expiry):
    _payoff(payoff), _expiry(expiry)
{
}

double VanillaOption::get_expiry() const
{
    return _expiry;
}

double VanillaOption::option_payoff(double spot) const
{
    return _payoff(spot);
}

