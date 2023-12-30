#include<iostream>
using namespace std;
double x=1.5;
int main()
{ double x=5;
  cout<<"全局变量为:"<<::x<<endl;    //a用域作用符访问全局变量 
  cout<<"局部变量为:"<<x<<endl;
  return 0; 
}

