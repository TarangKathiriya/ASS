//Q2: The given code has a base class charInput, it has member methods add() and getvalue(). The class numInput inherits charInput. 
//    You need to implement:
//	add(): it should be inside charInput, this adds the given character to the current value
//	getValue(): it should be inside numInput, it returns the current value
//	add(): it should be inside numInput, this must override the base class method so that each non-numeric char is ignored.
#include<iostream>
#include<string>
using namespace std;

class charInput{
private:
    string value;
public:
    virtual void add(char c){ value=value+c;}
    string getValue() {
        return value;
    }    
};
class numInput: public charInput{

public:
    void add(char c){
        if(!isalpha(c)){
            return charInput::add(c);
        }
        
    }
};
int main(){
charInput* inputC = new charInput();
numInput* inputN = new numInput();
inputN->add('1');
inputN->add('a');
inputN->add('0');
cout<<inputN->getValue();
// the output should be 10
}
