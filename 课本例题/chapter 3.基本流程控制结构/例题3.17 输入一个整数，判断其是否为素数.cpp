#include<iostream>
using namespace std;
int main()
{  int x,i;
   cout<<"������һ������:";
   cin>>x;
   for(i=2;i<x;i++)              //i��Ϊ��������2~��x-1��ѭ�� 
   {  if(x%i==0)                 //�ж�i�Ƿ�Ϊx������ 
        break;                   //���iΪ���ӣ�x���������������ж��������� 
   }                  
      if(i>=x)                   //������������i<x�˳�ѭ���������� 
       {cout<<x<<"������"<<'\n';}
           else {cout<<x<<"��������\n";} 
    
   return 0;
}
