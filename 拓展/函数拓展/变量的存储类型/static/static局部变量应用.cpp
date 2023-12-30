#include<iostream>
using namespace std;
int fun(int a,int b)
{   static int c=3;
    c=c*a*b;
    return c;
}
int main()
{   int x,y;
    cin>>x>>y;
    cout<<fun(x,y)<<'\n';
    cout<<fun(x,y); 
}
