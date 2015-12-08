#include "vanilla2.h"

VanillaOption::VanillaOption(PayOff& payoff, double expiry):
    _expiry(expiry)
{
    _payoff = payoff.clone();
}

VanillaOption::VanillaOption(const VanillaOption& source)
{
    _expiry = source._expiry;
    _payoff = source._payoff->clone();
}

double VanillaOption::get_expiry() const
{
    return _expiry;
}

double VanillaOption::option_payoff(double spot) const
{
    return (*_payoff)(spot);
}

VanillaOption& VanillaOption::operator=(const VanillaOption& original)
{
    if(this != &original)
    {
        _expiry = original.get_expiry();
        delete _payoff;
        _payoff = original.get_payoff()->clone();
    }
    return *this;
}

PayOff* VanillaOption::get_payoff() const
{
    return _payoff;
}

VanillaOption::~VanillaOption()
{
    delete _payoff;
}
