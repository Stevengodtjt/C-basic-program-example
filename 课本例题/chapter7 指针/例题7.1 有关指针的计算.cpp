#include<iostream>
using namespace std;
int main()
{ int a=2,b=4;
  int *p1,*p2;     //定义两个整形指针变量，其中"*"是类型说明符
  p1=&a;           //把变量a的地址赋给p1
  p2=&b;           //把变量b的地址赋给p2
  cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
  cout<<"*p1="<<*p1<<'\t'<<"p2="<<*p2<<endl;    //输出p1、p2所指向的内存数据，"*"表示"指向"
  return 0;
} 
