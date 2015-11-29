#include "simpleMC1.h"
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

    cout<<"\nEnter strike\n";
    cin>>strike;

    cout<<"\nEnter spot\n";
    cin>>spot;

    cout<<"\nEnter vol\n";
    cin>>vol;

    cout<<"\nEnter rate\n";
    cin>>r;

    cout<<"\nEnter number of paths\n";
    cin>>num_of_paths;

    PayOffCall call_payoff(strike);
    PayOffPut put_payoff(strike);

    double res_call = simple_MonteCarlo(call_payoff,
                                        expiry,
                                        vol,
                                        spot,
                                        r,
                                        num_of_paths);
    double res_put = simple_MonteCarlo(put_payoff,
                                       expiry,
                                       vol,
                                       spot,
                                       r,
                                       num_of_paths);

    cout<<"the price are "<<res_call<<" for call and "
        <<res_put<<" for put\n";

    return 0;
}

