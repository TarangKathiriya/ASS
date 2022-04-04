//Q5: There are p white balls and q red balls, you need to put them into r bags such that: No bag should be empty
//		A bag can contain only red balls or white balls, not both
//		No red ball can be left alone in a bag
//		Find the number of ways to put the balls in bags. All bags are identical, but each ball is unique (or numbered).
#include <iostream>
using namespace std;
int fact(int n);

int ncr(int n, int r)
{
return fact(n) / (fact(r) * fact(n - r));
}

int fact(int m)
{
int res = 1;
for (int i = 2; i <= m; i++)
res = res * i;
return res;
}

int main()
{
    int w,r,b;
    cout<<"enter  no. of white ball, red ball and no. of bag\n";
    cin>>w>>r>>b;
    int h = ncr(b, w);
       //cout<<h<<endl;
    int  c = w + r/2;
    int count = 0;  
    while(!(b > c)){
      
     //cout<<(h/w);
     int ans = h/w;
     count = ans;
     //cout<<count;
     break;
    }
   
    cout<<count<<endl;
}
