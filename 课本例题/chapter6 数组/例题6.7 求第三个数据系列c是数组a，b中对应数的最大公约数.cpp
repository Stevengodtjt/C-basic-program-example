#include<iostream>
using namespace std;
int gys(int m,int n)      //�������������Լ�����β��Ǳ���
{  int r,t;
   if(m<n)               //�㷨Ҫ��m>n 
   { t=m;
     m=n;
     n=t;
   }
    do
   {  r=m%n;
      m=n;
      n=r;
   } while(r>0);
   return m;
} 
int main()
{ int a[8]={26,1007,956,705,574,371,416,517};
  int b[8]={994,631,772,201,262,763,1000,781};
  int c[8],i;
  for(i=0;i<8;i++)
  { c[i]=gys(a[i],b[i]); }  //��ӦԪ�صĹ�Լ����ʵ��������Ԫ��
  for(i=0;i<8;i++)
  cout<<c[i]<<'\t';
  cout<<endl;
  return 0; 
}
