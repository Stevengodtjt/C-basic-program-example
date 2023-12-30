#include<iostream>
using namespace std;
int f1(int a)           //形参a
{return a*a;}

int f2(int b)          //局部变量a 
{  int a;
   a=b+1;
   return a*a;
} 
int main()
{  extern int a; 
   cout<<"The result of f1 is:"<<f1(2)<<endl;
   cout<<"The result of f2 is:"<<f2(2)<<endl;
   cout<<"a="<<a<<'\n';                        //全局变量a
   return 0; 
}
int a=10;
