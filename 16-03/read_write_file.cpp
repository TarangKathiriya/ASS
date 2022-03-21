#include<iostream>
#include<fstream>
using namespace std;

class student{
    public: int roll;
    char name[25];
    float marks;
    void getdata(){
        cout<<"enetr roll no and name"<<endl;
        cin>>roll>>name;
        cout<<"marks"<<endl;
        cin>>marks;
    }
    void addrecord(){
        fstream f;
        student stu;
        f.open("student.dat",ios::app|ios::binary);
        stu.getdata();
        f.write((char*)&stu, sizeof(stu));
        f.close();
    }
     void display(){
        fstream f;
        student s;
        f.open("student.dat",ios::app|ios::binary);
        f.read((char*)&s, sizeof(s));
        cout<<"roll "<<s.roll<<endl<<"name "<<s.name<<endl<<"mark "<<s.marks<<endl;
        f.close();
    }

};

int main()
{
    student s1;
   char ch='n';
   do{
      s1.addrecord(); 
      cout<<"want add more?(y/n)"<<endl;
      cin>>ch;
   }while(ch=='y');
   cout<<"updated"<<endl;
   s1.display();
   return 0;
    
}