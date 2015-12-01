#include "simpleMC2.h"
#include "doubleDigit1.h"
#include <iostream>

using namespace std;

int main()
{
    double expiry;
    double upper;
    double lower;
    double spot;
    double vol;
    double r;
    unsigned long num_of_paths;

    cout<<"\nEnter expiry\n";
    cin>>expiry;

    cout<<"\nEnter upper bound\n";
    cin>>upper;
    cout<<"\nEnter lower bound\b";
    cin>>lower;

    cout<<"\nEnter spot\n";
    cin>>spot;

    cout<<"\nEnter vol\n";
    cin>>vol;

    cout<<"\nEnter rate\n";
    cin>>r;

    cout<<"\nEnter number of paths\n";
    cin>>num_of_paths;

    DoubleDigit double_digit_payoff(upper, lower);
    VanillaOption option(double_digit_payoff, expiry);
    double res= simple_MonteCarlo(option,
                                  vol,
                                  spot,
                                  r,
                                  num_of_paths);

    cout<<"the price are "<<res<<" for double digit option\n";
    return 0;
}

