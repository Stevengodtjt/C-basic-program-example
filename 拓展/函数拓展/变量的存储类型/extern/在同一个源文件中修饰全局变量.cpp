#include<iostream>
using namespace std;
int max(int x,int y)
{   int z;
    z=x>y?x:y;
    return(z);
}
int main()
{  extern int a,b;         //A声明a和b为外部类型变量(引用main函数之后的全局变量的声明） 
   cout<<max(a,b)<<'\n';   //B使用全局变量a和b
   return 0; 
}                         
int a=10,b=-8;            //C在main函数之后定义全局变量a和b 
