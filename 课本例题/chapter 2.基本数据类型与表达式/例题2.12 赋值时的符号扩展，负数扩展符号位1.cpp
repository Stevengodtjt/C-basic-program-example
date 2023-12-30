#include<iostream>
using namespace std;
int main()
{   short int a=-1;
    long int b;
    b=a;                      //两个字节赋给四个字节，最高位1扩展 
    cout<<"b="<<b<<endl;
    return 0;
}
