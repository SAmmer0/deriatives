#ifndef _VANILLA2_H_
#define _VANILLA2_H_

#include "payoff2.h"

class VanillaOption
{
    public:
        VanillaOption(PayOff& payoff, double expirty);
        VanillaOption(const VanillaOption& source);
        double get_expiry() const;
        PayOff* get_payoff() const;
        double option_payoff(double spot) const;
        VanillaOption& operator=(const VanillaOption& original);
        ~VanillaOption();
    private:
        PayOff* _payoff;
        double _expiry;
};
#endif
