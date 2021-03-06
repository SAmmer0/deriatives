#ifndef _PAYOFF1_H_
#define _PAYOFF1_H_

class PayOff
{
    public:
        PayOff(){};
        virtual double operator()(double spot) const=0;
        virtual ~PayOff(){}
    private:
};

class PayOffCall: public PayOff
{
    public:
        PayOffCall(double strike);
        virtual double operator()(double spot) const;
        virtual ~PayOffCall(){}
    private:
        double _strike;
};

class PayOffPut: public PayOff
{
    public:
        PayOffPut(double strike);
        virtual double operator()(double spot) const;
        virtual ~PayOffPut(){}
    private:
        double _strike;
};

#endif
