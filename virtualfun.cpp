#include<iostream>
using namespace std;
class base{
    public:
    virtual void show()
    {
        cout<<"base\n";
    }
};
class dev1:public base{
    public:
    void show()
    {
        cout<<"dev1\n";
    }
};
class dev2:public base{
    public:
    void show()
    {
        cout<<"dev2\n";
    }
};
int main()
{
 dev1 dv1;
 dev2 dv2;
 base* ptr;
 ptr = &dv1;
 ptr->show();
 ptr = &dv2;
 ptr->show();
 return 0;
}