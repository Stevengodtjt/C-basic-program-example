#include<iostream>
using namespace std;
int main()
{  int x,i;
   cout<<"请输入一个整数:";
   cin>>x;
   for(i=2;i<x;i++)              //i作为除数，从2~（x-1）循环 
   {  if(x%i==0)                 //判断i是否为x的因子 
        break;                   //如果i为因子，x不是素数，不必判断其他因子 
   }                  
      if(i>=x)                   //条件成立，从i<x退出循环，是素数 
       {cout<<x<<"是素数"<<'\n';}
           else {cout<<x<<"不是素数\n";} 
    
   return 0;
}
