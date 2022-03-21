#include <iostream>
using namespace std;
template <typename T>
T sum(T n1, T n2)
{
    T rs;
    rs = n1+n2;
    return rs;
}

int main()
{
    int a =10, b=20, c;
    long A=11, B =22, C;
    c = sum(a,b);
    cout<<"the sum of int is"<<c<<endl;
    C = sum(A,B);
    cout<<"the sum of double"<<C<<endl;
    return 0;


}