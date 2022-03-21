#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("data.txt");
    ofile<<"line on ein the doc"<<endl;
    ofile<<"another line"<<endl;
    cout<<"to the terminal"<<endl;
    ofile.close();
    return 0;

}