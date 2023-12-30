#include<iostream>
using namespace std;
int main()
{    char c1=254;     //c1默认为有符号字符型
     int a;
	 a=c1;            //赋值时高位字节符号位扩展
	 cout<<"a="<<a<<'\n';
	 return 0; 
     
}
