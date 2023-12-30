#include<iostream>
using namespace std;
int a;                      //定义全局变量a 
int main()
{  extern int power(int);    //声明被调函数是定义在其他条件中的函数
   int c,d,m;
   cout<<"请输入a和m的值:";  
   cin>>a>>m;
   c=a*a*a;
   cout<<a<<"^3"<<"="<<c<<endl;
   d=power(m);                       //调用外部函数 
   cout<<a<<"^"<<m<<"="<<d<<endl;
   
   a=a+1;
   d=power(m);
   cout<<a<<"^"<<m<<"="<<d<<endl;
   return 0; 
} 

extern int a;          //声明变量a是引用其他文件中的外部变量
int power(int n)
{  int i,y=1;
   for(i=1;i<=n;i++)
    y=y*a;
    return y;
} 


