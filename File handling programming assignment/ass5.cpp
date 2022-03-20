#include<iostream>
#include<fstream>
using namespace std;

void options();
void menu();
void search();
void add();

class Student
{
     
     int ID;
     string name;
     string branch;
     string loc;
    
     public:
     void getdata();
     void display();
     int getno()
      {return ID;}
}s;


void Student::getdata()
{
     cout<<"Enter ID : ";
     cin>>ID;
     cout<<"Enter Name     : ";
     cin>>name;
    
     cout<<"Enter Branch     : ";
     cin>>branch;
    
     cout<<"Enter Location     : ";
     cin>>loc;

}


void Student::display()
{
     cout<<"=================================================\n";
     cout<<"ID : "<<ID<<"\tName  : "<<name<<"\n";
     cout<<"Branch    : "<<branch <<"\tLocation : "<<loc<<"\n";
     
}

int main()
{
     int id;
     fstream fp("ass5.txt",ios::in|ios::out|ios::binary);
     menu();
    
     return 0;
}

void options()
{
     cout<<"\t1: enter Student detail\n";
     cout<<"\t2: find Student\n";
     cout<<"\nEnter Your Choice  : ";
}

void menu()
{
     int ch;
     options();
     cin>>ch;
     while(ch)
     {
           switch(ch)
           {
                  case 1: 
                            add(); break;
                  case 2:
                            search(); break;
                  default:
                         
                            try
                            {
                                throw ch;
                            }
                            catch(int)
                            {
                                cout << "Caught an exception -- value is: ";
                                cout << ch << "\n";
                                cout<<"Wrong Input please enter the correct value...."<<endl;
                            }
           }
        
           options();
           cin>>ch;
     }
}


void search()
{
     ifstream fin("ass5.txt",ios::in|ios::binary);
     int ID,i=0;
     char found='n';
     cout<<"\nEnter ID to be searched : ";
     cin>>ID;
     
     while(fin.read((char*)&s,sizeof(s)))
     {
          if(s.getno()==ID)
          {
               s.display();
               found='y';
          }
          i++;
     }
     if(found=='n') cout<<"\nThe ID "<<ID<<" is not in the file...\n";
     fin.close();
}


void add()
{
         char ch='y';
         ofstream fout("ass5.txt",ios::out|ios::app|ios::binary);
         while(ch=='y'||ch=='Y')
         {
              s.getdata();
              fout.write((char*)&s,sizeof(s));
              cout<<"\nDo you want to add more : ";
              cin>>ch;
         }
         cout<<"\nData Appended and Transferred to file...\n";
         fout.close();
}
