#include<iostream>
using namespace std;
int main()
{   int m,a,b,c,d;
    cin>>m;
    a=m%10;     //四位数m的个位 
    b=m/10%10;  //四位数m的十位 
    c=m/100%10;  //四位数m的百位 
    d=m/1000;   //四位数m的千位 
    cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"c="<<c<<'\t'<<"d="<<d<<endl;
    return 0;
}
