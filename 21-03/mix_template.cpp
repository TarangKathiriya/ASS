#include <iostream>
using namespace std;
template <typename T, int n>
class mys{
    T memblock [n];
    public:
    void setmember(int x, T value);
    T getmember(int x);

};
template<class T, int n>
void mys<T,n>::setmember(int x, T value)
{
    memblock[x] = value;
}

template<class T, int n>
T mys<T,n> :: getmember(int x)
{
    return memblock[x];
}
int main(){
    mys<int,5> myints;
    mys<double,5> myfloats;
    myints.setmember(0,100);
    myfloats.setmember(3,3.14);
    cout<<myints.getmember(0)<<endl;
    cout<<myfloats.getmember(3)<<endl;
    return 0;

}
