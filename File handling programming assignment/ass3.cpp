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
            if(strlen(word)>1)
            {
               
                if(word[0]=='e')
                  count++;     
            }
        }
    }
    cout<<"number of word that start with char 'e' in file is "<<count<<endl;
    fin.close();
}