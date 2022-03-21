#include <iostream>
using namespace std;
template <typename T,typename U>
T swap(T *n1, U *n2)
{
    int temp;
    temp = *n1;
    *n1=*n2;
    *n2=temp;
}
int main()
{
    int n1, n2;
    n1 = 10;
    n2 = 20;
    cout<<"before n1 is"<<n1<<endl<<"before n2 is"<<n2<<endl;
    swap(&n1,&n2);
    cout<<"n1 is"<<n1<<endl<<"n2 is"<<n2<<endl;
}