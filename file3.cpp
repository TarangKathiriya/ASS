#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream input;
    string str, str2, str3;
    input.open("file.txt");

    if(!input)
    cout<<"the file cannot open"<<endl;
    else{
        while(!input.eof())
        {
            input>>str>>str2>>str3;
            cout<<str<<'\t'<<str2<<'\t'<<str3<<endl;
        }
     
    }
    input.close();

}