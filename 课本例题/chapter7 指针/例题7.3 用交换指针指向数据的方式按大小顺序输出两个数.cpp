#include<iostream>
using namespace std;
int main()
{  int a,b,t;
   int *p1,*p2;
   p1=&a;
   p2=&b;
   cout<<"������������:";
   cin>>a>>b;
   if(a<b)
   {t=*p1; *p1=*p2; *p2=t; }   //����*p1��*p2��ֵ
   cout<<"����С˳�����:";
   cout<<*p1<<'\t'<<*p2<<endl;
   cout<<"a="<<a<<'\t'<<"b="<<b;
   return 0; 
}
