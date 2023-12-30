#include<iostream>
using namespace std;
int main()
{   char ch=256;   //整型变量（4个字节）赋给字符型变量（1个字节） 
    int a=ch+1;
	cout<<"a="<<a<<endl;
	return 0; 
}
