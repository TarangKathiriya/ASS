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
                for(int i=0;i<word[i];i++)
                if(word[i]=='a')
                count++;
                
            }
            else{
                continue;
            }

        }
    }
    cout<<"number of word that have char 'a' present in file is "<<count<<endl;
    fin.close();
}