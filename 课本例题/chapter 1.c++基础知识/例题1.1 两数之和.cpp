//源程序文件名为Ex1_1.cpp，用于计算两个整数之和
#include<iostream>
using namespace std;
int main() 
{   int a,b,sum;      //定义自变量
    cin>>a>>b;        //从键盘上输入变量a，b的值
	sum=a+b;          //计算a+b，并将结果传给sum 
	cout<<"sum="<<sum;//输出变量sum的值，即将sum的值显示在显示屏上
	cout<<'\n';        //使光标在显示器上换行
	return 0;          //执行main函数后向操作系统返回一个值0 
} 
