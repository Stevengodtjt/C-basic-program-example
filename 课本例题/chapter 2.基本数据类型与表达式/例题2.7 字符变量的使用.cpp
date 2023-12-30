#include<iostream>
using namespace std;
int main()
{  char c1,c2;     //定义两个字符变量
   c1='A';         //赋值字符A的ASCII码
   c2='\x61';      //赋值字符a的转义字符形式
   cout<<c1<<'\t'<<c2<<endl; //输出结果
   return 0; 
}
