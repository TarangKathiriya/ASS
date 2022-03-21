#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream input, output;
    
    input.open("file.txt");
    output.open("file1.txt");
    //char ch;
    string str;
    
    
        //while(!input.eof())
       // {
        //    input.get(ch);
        //    output<< ch;
      // }
      while(getline(input,str))
      {
          
          output<<str<<endl;
      }
       cout << "copy done"<<endl;
       input.close();
       output.close();
       
    
return 0;
}