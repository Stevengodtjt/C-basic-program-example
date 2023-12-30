#include<iostream>
using namespace std;
int sum(int a,int b) //A
{ return a+b;}
double sum(double a,double b) //B
{ return a+b;} 
  int main()
{ cout << "3+5=" << sum(3,5)<<endl;         //实参为整数，调用A的sum函数
 cout << "3.5+8.7=" << sum(3.5,8.7)<<endl; //实参为浮点数，调用B的sum函数
 return 0;
}
