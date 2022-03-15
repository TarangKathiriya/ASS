#include<iostream>
using namespace std;
void demo() throw(int,double)
{
    int a;
    cin>>a;
    if(a==1)
    throw a;
    else if(a==2)
    throw 'A';
    else if(a==3)
    throw 4.5;

}
int main()
{
    try
    {
        
            demo();
    }
        catch(int n)
        {
            cout<<"\n execption caught";
        }
        catch(double n)
        {
            cout<<"\n execption caught";
        }
        cout<<"\n end of";
    return 0;
    
}