#include<iostream>
using namespace std;
class base{
	int x;
public:
base()
{
cout<<"base defualt"<<endl;
}
};
class derived:public base
{
 int y;
public:
derived()
{
cout<<"derived defualt"<<endl;
}
derived(int i)
{
cout<<"perame"<<endl;

}
};
int main()
{
base b;
derived d1();
derived d2(10);
return 0;
}
