#include<iostream>
using namespace std;
template<typename t>
class s1
{
    public:
void fun(t x){
    static int i=10;
    cout<<++i<<endl;
}
};
int main(){
    s1<int> s;
    s1<double> s2;
    s.fun(2);
    s.fun(2);
    s.fun(2);
    s2.fun(10.1);
}