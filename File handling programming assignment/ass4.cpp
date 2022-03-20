#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

int main(){
    fstream fp;
    string word;

    
    int len,count=0;

    fp.open("ass.txt");

    while(!fp.eof()){
        fp>>word;
        len=word.length();
        if(word[len-1] == 's'){
            count++;
        }
        else if(word[len-1] == '.' && word[len -2]=='s'){
            count++;
        }
    }
    cout<<"Total occurance of word ending with 's' is:"<<count<<endl;
    fp.close();
}