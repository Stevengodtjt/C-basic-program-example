#include<iostream>
using namespace std;
int main()
{  int x,a,b,c,d,e;    //x（abcde）为正整数，e为个位数字，d为十位数字，c为百位数字，b为千位数字，a为万位数字 
   cout<<"输入一个正整数x:"; 
   cin>>x;
   if(x>0&&x<=99999)
   {
   int z;              //z代表x有几位
   int i;              //i代表x的各位数字之和 
   e=x/10000;
   d=x%10000/1000;
   c=x%1000/100; 
   b=x%100/10;
   a=x%10;
   z=5-(!a+!b+!c+!d+!e);
   i=a+b+c+d+e; 
   cout<<"该正整数的位数为："<<z<<endl;
   cout<<"该正整数各位数字之和为："<<i<<endl;           //若中间位数有0则会影响判断。综上，此法不通，令行禁止 
   }
   else cout<<"x不合题意"; 
   return 0;
} 
