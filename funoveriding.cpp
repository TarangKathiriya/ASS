//function over riding
#include<iostream>
using namespace std;
class abc
{
public:
void display()
	{
	cout<<"this is parent"<<endl;
	}
};
class xyz:public abc{
	public:
	void display()
	{
	cout<<"this is childe"<<endl;
	}
};
int main()
{
	xyz a;
	a.display();
	a.abc::display(); //if we have same function name than we can use over riding
}
