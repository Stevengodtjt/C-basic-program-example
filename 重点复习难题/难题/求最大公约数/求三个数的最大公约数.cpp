#include<iostream>
using namespace std;
int gys(int a,int b,int c)    //�����������Լ�����ǿ��Ա���������������������
{  int i;
   for(i=a;i>=1;i--)              //�ɴ�Сѭ�����ҹ�Լ��
   {  if(a%i==0&&b%i==0&&c%i==0)  //�жϹ�Լ��������
        break;                   //�����������˳�ѭ�� 
   } 
   return i; 
} 
 int main()
 { int a,b,c;
    cout<<"������������:";
	cin>>a>>b>>c;
	cout<<a<<","<<b<<","<<c<<"�����Լ����:"<<gys(a,b,c);   //���ú���
	return 0; 
 }
