#include<iostream>
using namespace std;
int fun(int a)          //存储在静态区，只赋一次初值
{  static int b=3;
   b=b+a;
   return b;
} 
int main()
{  int a=2,y;
   y=fun(a);
   cout<<"第1次调用y="<<y<<endl;
   y=fun(a);
   cout<<"第2次调用y="<<y<<endl;
   return 0; 
}

