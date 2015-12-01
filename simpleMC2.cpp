#include "simpleMC2.h"
#include "random1.h"
#include <cmath>

#if !defined(_MS_VER)
using namespace std;
#endif

double simple_MonteCarlo(const VanillaOption& option, 
                         double vol,
                         double spot,
                         double rate,
                         unsigned long num_of_paths)
{
    double expiry = option.get_expiry();
    double variance = vol*vol*expiry;
    double std = sqrt(variance);
    double ito_correction = -0.5*variance;

    double move_spot = spot*exp(rate*expiry + ito_correction);
    double this_spot;
    double running_sum = 0;

    for(unsigned long i=0; i<num_of_paths; i++)
    {
        double this_gaussian = get_gaussian_by_BoxMuller();
        this_spot = move_spot*exp(std*this_gaussian);
        double this_payoff = option.option_payoff(this_spot);
        running_sum += this_payoff;
    }
    double mean = running_sum/num_of_paths;
    mean *= exp(-rate*expiry);
    return mean;
}
