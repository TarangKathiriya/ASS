#include<iostream>
using namespace std;
class base{
	int i, j;
	public:
	 void set(int a,int b)
	{
	i=a;
	j=b;
	}
	void show()
	{
	cout<<i<<""<<j<<endl;
	}
};
class derived1 : private base
{
	int k;
	public:
	void setk()
	{
	k = i*j;
	}
	void showk()
	{
	cout<<k<<"\n";
	}
};
class derived2 : private base
{
	int m;
	public:
	void setm()
	{
	m = i-j;
	}
	void showk()
	{
	cout<<m<<"\n";
	}
};
int main()
{
derived1 ob1;
derived1 ob2;
ob1.set(1,2);
ob1.show();
ob2.set(3,4);
ob2.show();
return 0;
}
