#include<iostream>
using namespace std;
int main()
{  int x,a,b,c,d,e;    //x��abcde��Ϊ��������eΪ��λ���֣�dΪʮλ���֣�cΪ��λ���֣�bΪǧλ���֣�aΪ��λ���� 
   cout<<"����һ��������x:"; 
   cin>>x;
   if(x>0&&x<=99999)
   {
   int z;              //z����x�м�λ
   int i;              //i����x�ĸ�λ����֮�� 
   e=x/10000;
   d=x%10000/1000;
   c=x%1000/100; 
   b=x%100/10;
   a=x%10;
   z=5-(!a+!b+!c+!d+!e);
   i=a+b+c+d+e; 
   cout<<"����������λ��Ϊ��"<<z<<endl;
   cout<<"����������λ����֮��Ϊ��"<<i<<endl;           //���м�λ����0���Ӱ���жϡ����ϣ��˷���ͨ�����н�ֹ 
   }
   else cout<<"x��������"; 
   return 0;
} 
