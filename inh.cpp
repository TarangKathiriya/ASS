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

int main()
{
	doctor d;
	d.degree();
	d.number();
	return 0;
}
	 
