#include<iostream>
using namespace std;
int main()
{   int a=10,b=3,m;
    m=b%=b++||a++;
    cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
    return 0;
}
