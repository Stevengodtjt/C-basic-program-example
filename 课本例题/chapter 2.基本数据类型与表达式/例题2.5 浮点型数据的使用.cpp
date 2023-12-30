#include<iostream>
using namespace std;
int main()
{   float a,b;      //定义单精度浮点数变量
    double c,d;     //定义双精度浮点型变量
	a=0.01;         //将双精度常数赋给单精度变量
	b=3.45678e-2;   //同上
	c=3.45678e-2;   //为双精度变量赋值
	d=9.7654e-5;    //同上
	cout<<"a="<<a<<'\t'<<"b="<<b<<endl;   //输出结果
	cout<<"c="<<c<<'\t'<<"d="<<d<<endl;   
	return 0; 
}
