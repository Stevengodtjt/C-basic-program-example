#include<iostream>
using namespace std;
int main()
{   unsigned char c1=254;    //c1为无符号型
    int a;
    a=c1;                   //赋值时高位字节补0 
    cout<<"a="<<a<<'\n';
    return 0;
} 
