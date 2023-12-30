#include<iostream>
using namespace std;
int main()
{   short int a=-1;    //a为有符号的短整型变量
    unsigned short b;  //b为无符号的短整型变量
	b=a;               //a的存储空间中的数据赋给b
	cout<<"b="<<b<<endl; //b存储空间中的数据以无符号的格式输出 
	return 0;
}
