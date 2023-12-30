#include<iostream>
using namespace std;
int del(int a[],int n,int c)    //删除相同数据(比较相邻的数是否相等) 
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
       t=del(b,n,6);             //调用del函数，返回删除后数组元素的个数
	cout<<"删除数据6后的数组为:\n";
	for(i=0;i<t;i++)
	{  cout<<b[i]<<'\t';}   
	cout<<endl;
	
	return 0;
}
