#include<iostream>
using namespace std;
class shape{
    protected:
    float x;
    public:
    void getdata()
    {
        cin>>x;
    }
    virtual float claculatearea() =0;

};
class square : public shape
{
    public:
    float claculatearea()
    {
        return x*x;
    }
};
class circle : public shape
{
    public:
    float claculatearea()
    {
        return 3.14*x*x;
    }
};
int main()
{
    square s;
    circle c;
    cout<<"enter l of square";
    s.getdata();
    cout<<"area of sq"<<s.claculatearea();
    cout<<"enter l of c";
    c.getdata();
    cout<<"area of sq"<<c.claculatearea();

}