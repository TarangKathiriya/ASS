#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream input;
    string str;
    int count = 0;
    input.open("file.txt");

    if(!input)
    cout<<"the file cannot open"<<endl;
    else{
        while(!input.eof())
        {
            input>>str;
            cout<<str<<endl;
            count++;
        }

       
    }
    cout<<"no of word" <<count<<endl;
    input.close();
return 0;
}