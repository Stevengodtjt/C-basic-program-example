#include<iostream>
using namespace std;
int del(int a[],int n,int c)    //ɾ����ͬ����(�Ƚ����ڵ����Ƿ����) 
{ int *p,*q,sum=0;
  p=&a[0];
  for(p=&a[0];p<&a[n-1];p++,sum++)
  {  if(*p==c)
	   {   for(q=p;q<&a[n-1];q++)
	        {*q=*(q+1);}
              n--;
              p--;
       }
  }
   return n;
} 
int main()
{  int b[]={9,1,2,2,2,3,3,4,4,4,6,6,5,5,6,4,6,7,9,80},i,n,t;
   n=sizeof(b)/sizeof(b[0]);
       t=del(b,n,6);             //����del����������ɾ��������Ԫ�صĸ���
	cout<<"ɾ������6�������Ϊ:\n";
	for(i=0;i<t;i++)
	{  cout<<b[i]<<'\t';}   
	cout<<endl;
	
	return 0;
}
