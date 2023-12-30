#include<iostream>
using namespace std;
int main()
{ int a=8,b=6;
  int area(int=4, int=2);   //函数原型声明，变量名可省，必须给出默认值
  cout<<area(a,b)<<endl;
  cout<<area(a)<<endl;
  cout<<area()<<endl;
  return 0; 
}
int area(int length ,int width)  //函数定义，不可再给出默认值 
{  return length*width;
}
