#ifndef _VANILLA1_H_
#define _VANILLA1_H_

#include "payoff1.h"

class VanillaOption
{
    public:
        VanillaOption(PayOff& payoff, double expirty);
        double get_expiry() const;
        double option_payoff(double spot) const;
    private:
        PayOff& _payoff;
        double _expiry;
};
#endif

