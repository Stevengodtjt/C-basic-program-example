#include<iostream>
using namespace std;
int main()
{  int a[6]={1,3,5,7,9,11},i,j,x;
   cout<<"ԭ������:\n";
   for(i=0;i<=5;i++)
   { cout<<a[i]<<'\t';
   } 
   cout<<'\n'; 
   cout<<"��������Ҫɾ��������:";
   cin>>x;
   for(i=0;i<=5;i++)
   {  if(a[i]==x)                //��ɾ���� 
     { for(j=i;j<=4;j++)        
        {  a[j]=a[j+1]; }         //��ɾ���������ݿ�ʼ������ǰ���� 
         break;                  //���������ݺ��˳�ѭ�� 
        
	 } 
   } 
   if(i==6)
     cout<<"������û��Ҫɾ��������\n";
   else
   { cout<<"ɾ������"<<x<<"�������Ϊ:\n";
     for(i=0;i<=4;i++)
	 { cout<<a[i]<<'\t';
	 } 
   } 
   return 0;
}
