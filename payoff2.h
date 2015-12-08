#ifndef _PAYOFF2_H_
#define _PAYOFF2_H_

class PayOff
{
    public:
        PayOff(){};
        virtual double operator()(double spot) const=0;
        virtual ~PayOff(){}
        virtual PayOff* clone() const=0;
    private:
};

class PayOffCall: public PayOff
{
    public:
        PayOffCall(double strike);
        virtual double operator()(double spot) const;
        virtual ~PayOffCall(){}
        virtual PayOffCall* clone() const;
    private:
        double _strike;
};

class PayOffPut: public PayOff
{
    public:
        PayOffPut(double strike);
        virtual double operator()(double spot) const;
        virtual ~PayOffPut(){}
        virtual PayOffPut* clone() const;
    private:
        double _strike;
};

#endif
