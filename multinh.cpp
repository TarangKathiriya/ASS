#include<iostream>
using namespace std;
class person{
	public:
	void number()
		{
		cout<<"age is 15"<<endl;
		}
};
class doctor: public person
{
	public:
	void degree()
	{
 		cout<<"has doctor degree"<<endl;
	}
};
class dentist: public doctor
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
	d.work();
	d.degree();
	d.number();
	return 0;
}
	 
