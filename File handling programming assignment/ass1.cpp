#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    fstream fin;
    fin.open("ass.txt");
    int count =0;
    char word[20];
    if(!fin)
    {
        cout<<"file not exist";

    }
    else{
        while(!fin.eof())
        {
            fin>>word;
            if(!strcmp(word,"the"))
            count++;

        }
    }
    cout<<"number of word 'the' present in file is "<<count<<endl;
    fin.close();
}
