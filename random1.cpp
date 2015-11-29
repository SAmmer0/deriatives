#include "random1.h"
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


double get_gaussian_by_summation()
{
    double res = 0;

    for(unsigned long j=0; j<12; j++)
        res += rand()/static_cast<double>(RAND_MAX);

    res -= 6.0;
    return res;
}

double get_gaussian_by_BoxMuller()
{
    double res;

    double x;
    double y;

    double size_squared;
    do
    {
        x = 2.0*rand()/static_cast<double>(RAND_MAX) - 1;
        y = 2.0*rand()/static_cast<double>(RAND_MAX) - 1;
        size_squared = x*x + y*y;
    }while(size_squared >= 1.0);

    res = x*sqrt(-2*log(size_squared)/size_squared);
    return res;
}
    
