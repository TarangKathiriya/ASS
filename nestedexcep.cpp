#include<iostream>
using namespace std;
int main()
{
    int a=1;
    try
    {
        try
        {
            throw a;
        }
        
    
    catch(int x)
    {
        cout<<"\neception in innner try catch block";
        throw x;
    }
    }
    catch (int y)
    {
        cout<<"abcd";

    }
    return 0;
}