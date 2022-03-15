#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream input;
    string str;
    input.open("file.txt");

    if(!input)
    cout<<"the file cannot open"<<endl;
    else{
        //while(!input.eof())
        //{
       //     input>>str;
       //     cout<<str<<"";
       // }
       while(getline(input,str))
       {
           cout<<str<<endl;
       }
    }
return 0;
}