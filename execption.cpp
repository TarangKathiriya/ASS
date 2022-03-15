#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout<<"enter no1"<<endl;
    cin>>n1;
     cout<<"enter no2"<<endl;
    cin>>n2;
    try{
        if(n2!=n1){
        float div = (float)n1/n2;
        if(div < 0)
        throw 'e';
        cout<<"n1/n2="<<div;
    }
        else{
            throw n2;
        }
    }
    catch(char e)
    {
        cout<<"n2 is zero"<<endl;
    }
    catch(int n2)
    {
        cout<<"n2 = n1"<<endl;
    }
   catch(...)
    {
        cout<<"end";
    }
    return 0;
}