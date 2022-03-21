#include <iostream>
using namespace std;
template <class T1, class T2>
class sample{
    T1 a; T2 b;
    public: void getdata()
    {
        cout<<"enter a&b"<<endl;
        cin>>a>>b;
    }
    void display(){
        cout<<"the values"<<endl;
        cout<<"a "<<a<<"b "<<b<<endl;

    }
};
int main()
{
    sample<int, int> b1;
    sample<int ,double> b2;
    sample<double, double> b3;
    cout<<"integer data"<<endl;
    b1.getdata();
    b1.display();
       cout<<"integer and double data"<<endl;
    b2.getdata();
    b2.display();
       cout<<"double data"<<endl;
    b3.getdata();
    b3.display();
}
