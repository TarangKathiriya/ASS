#include<iostream>
using namespace std;
class person{
	public:
	void age()
		{
		cout<<"age is 15"<<endl;
		}
};
class doctor: virtual public person 
{
	public:
	void degree(int x)
	{
 		cout<<"has doctor degree"<<x<<endl;
	}
};
class bio:virtual public person 
{
	public:
	void sub()
	{
 		cout<<"has bio knowledge"<<endl;
	}
};
class dentist: public doctor , public bio
{
	public:
		int x=5;
		void work()
		{
			cout<<"has teeth releted work"<<endl;
			cout<<"x is"<<x<<endl;
		}
};


int main()
{
	dentist d;
	doctor a;
	d.work();
	d.sub();
	d.degree(6);
	d.age();
	return 0;
}
	
