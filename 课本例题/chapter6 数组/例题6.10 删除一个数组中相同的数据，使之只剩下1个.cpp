#include<iostream>
using namespace std;
int del(int a[],int n)    //ɾ����ͬ����(�Ƚ����ڵ����Ƿ����) 
{ int i,j;
  for(i=0;i<n-1;i++)
  {  if(a[i]==a[i+1])  //�ж����ڵ����Ƿ����
     {   for(j=i;j<n-1;j++)   //����ȣ���ɾ��ǰһ���� 
          {  a[j]=a[j+1];}
              n--;            //ɾ����Ԫ�ظ������� 
              i--;            //�жϵ�ǰ�ƣ������ж�i֮���Ƿ�����ȵ��� 
          
     } 
  }
  return n;               //��ɾ��������ݸ������� 
} 
int main()
{  int b[]={1,1,1,2,2,2,3,3,4,4,4,5,5,6,6,6,6},i,n;
    n=sizeof(b)/sizeof(b[0]);
    n=del(b,n);             //����del����������ɾ��������Ԫ�صĸ���
	cout<<"ɾ����ͬ���ݺ������Ϊ:\n";
	for(i=0;i<n;i++)
	{  cout<<b[i]<<'\t';}   
	cout<<endl;
	return 0;
}
