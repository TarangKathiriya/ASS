#include <iostream>
using namespace std;
template <typename T,typename U>
T sum(T n1, U n2)
{
    T rs;
    rs = n1+n2;
    return rs;
}

int main()
{
    int a =10, b=20, c;
    long A=11, B =22, C;
    c = sum(a,B);
    cout<<"the sum of int  and double"<<c<<endl;
    C = sum(A,b);
    cout<<"the sum of double and int"<<C<<endl;
    return 0;
}