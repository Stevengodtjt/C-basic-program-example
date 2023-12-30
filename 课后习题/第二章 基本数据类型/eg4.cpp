#include<iostream>
using namespace std;
int main()
{   int a=0,b=0,c=0,m;
    m=a++&&(b+=a)||++c;
    cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"c="<<c<<endl;
    return 0;
}
