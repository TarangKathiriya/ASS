#include<iostream>
using namespace std;
class covert{
    protected:
    double val1;
    double val2;
    public:
    covert(double i)
    {
        val1 = i;
    }
    double getconv()
    {
        return val2;
    }
    double getinit()
    {
        return val1;
    }
    virtual void compute() =0;
};
class ltog:public covert{
    public:
    ltog(double i):covert(i){}
    void compute(){
        val2 = val1/3.7854;
    }
};
class ftoc:public covert{
    public:
    ftoc(double i):covert(i){}
    void compute(){
        val2 = (val1-32)/1.8;
    }
};
int main()
{
    covert *p;
    ltog lgob(4);
    ftoc fcob(70);
    p = &lgob;
    cout<<p->getinit()<<"liters is";
    p->compute();
    cout<<p->getconv()<<"gallons\n";
    p = &fcob;
    cout<<p->getinit()<<"fahrenheit is";
    p->compute();
    cout<<p->getconv()<<"celsius\n";
return 0;
}