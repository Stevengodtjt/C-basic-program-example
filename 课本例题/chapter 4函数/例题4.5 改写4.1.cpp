#include<iostream>
using namespace std;

int main()
{  int x,y,z;
   int max(int a,int b);                 //max������ԭ������ 
   cout<<"��������������:";
   cin>>x>>y;
   z=max(x,y);    //x,y��ʵ�ʲ�����Ϊ���������ṩ����
   cout<<x<<"��"<<y<<"�����ֵ��:"<<z<<endl;
   return 0; 
}
int max(int a,int b)
{ int c;         //a,b����ʽ�����������ⲿ���� 
  c=a>b?a:b;
  return c;
}
