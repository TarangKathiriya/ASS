#include<iostream>
using namespace std;
class a{
	public:
	void displayA()
	{
	cout<<" is a"<<endl;
	}
};
class b: public a{
	public:
	void displayB()
	{
	cout<<" is B"<<endl;
	}
};
class c: public b 
{
	public:
	void displayC()
	{
 		cout<<"IS C"<<endl;
	}
};
class d: public b, public c
{
	public:
	void displayD()
	{
 		cout<<"IS d"<<endl;
	}
};


int main()
{
	a a;
	b b;
	f f;
	e e;
	b b;
	a.displayA;
	b.displayA;
	b.displayC;
	b.displayD;

	

	return 0;
}
