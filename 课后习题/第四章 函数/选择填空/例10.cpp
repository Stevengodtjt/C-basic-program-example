#include<iostream>
using namespace std;
int a=1,b=2;
void fun1(int a,int b)
{cout<<a<<b;}
void fun2(void)
{ a=3;b=4;}
int main()
{  fun1(5,6); fun2();
   cout<<a<<b;
   return 0;
} 
