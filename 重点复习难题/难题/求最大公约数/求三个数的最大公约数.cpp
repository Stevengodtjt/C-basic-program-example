#include<iostream>
using namespace std;
int gys(int a,int b,int c)    //三个数的最大公约数就是可以被这三个数整除的最大的数
{  int i;
   for(i=a;i>=1;i--)              //由大到小循环查找公约数
   {  if(a%i==0&&b%i==0&&c%i==0)  //判断公约数的条件
        break;                   //满足条件，退出循环 
   } 
   return i; 
} 
 int main()
 { int a,b,c;
    cout<<"请输入三个数:";
	cin>>a>>b>>c;
	cout<<a<<","<<b<<","<<c<<"的最大公约数是:"<<gys(a,b,c);   //调用函数
	return 0; 
 }
