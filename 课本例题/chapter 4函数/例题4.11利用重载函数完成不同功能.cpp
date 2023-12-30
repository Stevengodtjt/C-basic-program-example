#include<iostream>
using namespace std;
int fun(int a,int b)      //A
{return a+b;}
int fun(int a)            //B
{ return a*a;}
int main()
{  cout<<fun(3,5)<<'\n';    //两个实参，调用A行的fun函数
   cout<<fun(5)<<endl;      //一个实参，调用B行的fun函数
   return 0; 
}

