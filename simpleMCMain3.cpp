#include "simpleMC3.h"
#include <iostream>

using namespace std;

int main()
{
    double expiry;
    double strike;
    double spot;
    double vol;
    double r;
    unsigned long num_of_paths;

    cout<<"\nEnter expiry\n";
    cin>>expiry;

    cout<<"\nEnter the strike\n";
    cin>>strike;

    cout<<"\nEnter spot\n";
    cin>>spot;

    cout<<"\nEnter vol\n";
    cin>>vol;

    cout<<"\nEnter rate\n";
    cin>>r;

    cout<<"\nEnter number of paths\n";
    cin>>num_of_paths;

    PayOffCall payoff(strike);
    VanillaOption option(payoff, expiry);
    double res= simple_MonteCarlo(option,
                                  vol,
                                  spot,
                                  r,
                                  num_of_paths);

    cout<<"the price are "<<res<<" for double digit option\n";
    return 0;
}
