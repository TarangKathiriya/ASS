#include<iostream>
using namespace std;
class person{
	public:
	void number()
		{
		cout<<"age is 15"<<endl;
		}
};
class doctor
{
	public:
	void degree(int x)
	{
 		cout<<"has doctor degree"<<x<<endl;
	}
};
class dentist: public doctor , public person
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
	d.degree(6);
	d.number();
	return 0;
}
	 
