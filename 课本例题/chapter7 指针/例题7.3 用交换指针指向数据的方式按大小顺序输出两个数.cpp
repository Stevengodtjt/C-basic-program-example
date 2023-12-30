#include<iostream>
using namespace std;
int main()
{  int a,b,t;
   int *p1,*p2;
   p1=&a;
   p2=&b;
   cout<<"请输入两个数:";
   cin>>a>>b;
   if(a<b)
   {t=*p1; *p1=*p2; *p2=t; }   //交换*p1与*p2的值
   cout<<"按大小顺序输出:";
   cout<<*p1<<'\t'<<*p2<<endl;
   cout<<"a="<<a<<'\t'<<"b="<<b;
   return 0; 
}
