#include<iostream>
using namespace std;
void inverse(int *p,int n)
{  int *q=p+n-1;       //ָ�����qָ���������һ��Ԫ��
   int t;
   while(p<q)
   {   t=*p;
       *p=*q;        //����*p��*q 
       *q=t;        
       p++;  q--;    //�ƶ�ָ����� 
   } 
}
int main()
{ int a[10]={1,2,3,4,5,6,7,8,9,10};
  inverse(a,10);
  for(int i=0;i<10;i++)
    cout<<a[i]<<'\t';
    return 0;
} 
