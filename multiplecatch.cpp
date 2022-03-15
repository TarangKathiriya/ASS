#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    
    try
    {
        if(a==1)
         throw a;
        else if(a==2)
         throw 'A';
        else if(a==3)
         throw 3.4;
    }
    catch(int a)
    {
        cout<<"a"<<endl;
    }
    catch(char A)
    {
        cout<<"A"<<endl;
    }
    catch(double c)
    {
        cout<<"3.4";
    }
    return 0;
}