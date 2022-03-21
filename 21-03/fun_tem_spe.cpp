#include <iostream>
using namespace std;
template <typename T>
T swap(T *n1, T *n2)
{
    T temp;
    temp = *n1;
    *n1=*n2;
    *n2=temp;
    cout<<"inside template"<<endl;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    cout<<"inside int"<<endl;
}
int main()
{
    int n1, n2;
    n1 = 10;
    n2 = 20;
    cout<<"before n1 is"<<n1<<endl<<"before n2 is"<<n2<<endl;
    swap(&n1,&n2);
    cout<<"n1 is"<<n1<<endl<<"n2 is"<<n2<<endl;

    float a =2.5;float b=4.4;
    char A='y', B='n';

    cout<<"before a is"<<a<<endl<<"before b is"<<b<<endl;
    swap(&a,&b);
    cout<<"a is"<<a<<endl<<"b is"<<b<<endl;

    cout<<"before A is"<<A<<endl<<"before B is"<<B<<endl;
    swap(&A,&B);
    cout<<"A is"<<A<<endl<<"B is"<<B<<endl;

}