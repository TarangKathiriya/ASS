#include <iostream>
using namespace std;
template <class T1>
void sum(T1 a, T1 b, T1 c)
{
    cout<<"sum: "<<a+b+c<<endl;
}
template<class T1, class T2>
void sum(T1 a, T2 b, T1 c)
{
    cout<<"sum: "<<a+b+c<<endl;
}
void sum(int a, int b)
{
    cout<<"sum: "<<a+b<<endl;
}
int main()
{
    int a=10,b=20,c=30;
    float B=4.5;
    sum(a,b);
    sum(a,b,c);
    sum(a,B,c);
    return 0;
}