#include<iostream>
using namespace std;
float average(int (*p)[4],int n)       //����ָ��������β�
{ float aver=0;
  for(int i=0;i<n;i++,p++)      //��ָ������Լӣ�ָ����һ��
   for(int j=0;j<4;j++)
     aver=aver+(*p)[j];
	 aver=aver/n/4;            //n�������� 
	 return aver; 
} 
void output(int *p,int n)       
{  for(int i=0;i<n;i++,p++)    //��ָ������Լӣ�ָ����һ��Ԫ��
    if(*p<60)
	 cout<<*p<<'\t';
	 cout<<endl; 
}
int main()
{    int a[3][4]={{80,90,80,70},{60,50,70,75},{55,80,75,75}};
     float aver;
     aver=average(a,3);
     output(a[0],12);
     cout<<"average="<<aver<<endl;
     return 0;
}
