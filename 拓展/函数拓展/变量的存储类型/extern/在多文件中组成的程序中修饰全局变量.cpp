#include<iostream>
using namespace std;
int a;                      //����ȫ�ֱ���a 
int main()
{  extern int power(int);    //�������������Ƕ��������������еĺ���
   int c,d,m;
   cout<<"������a��m��ֵ:";  
   cin>>a>>m;
   c=a*a*a;
   cout<<a<<"^3"<<"="<<c<<endl;
   d=power(m);                       //�����ⲿ���� 
   cout<<a<<"^"<<m<<"="<<d<<endl;
   
   a=a+1;
   d=power(m);
   cout<<a<<"^"<<m<<"="<<d<<endl;
   return 0; 
} 

extern int a;          //��������a�����������ļ��е��ⲿ����
int power(int n)
{  int i,y=1;
   for(i=1;i<=n;i++)
    y=y*a;
    return y;
} 


