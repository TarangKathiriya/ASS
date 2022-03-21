#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("data.txt");
    out<<"this is my file";
    long pos = out.tellp();
    out.seekp(pos+6);
    out<<"again my file";
    out.close();
    cout<<"done";
    return 0;

}