#include<iostream>
using namespace std;
int del(int a[],int n)    //删除相同数据(比较相邻的数是否相等) 
{ int i,j;
  for(i=0;i<n-1;i++)
  {  if(a[i]==a[i+1])  //判断相邻的数是否相等
     {   for(j=i;j<n-1;j++)   //若相等，则删除前一个数 
          {  a[j]=a[j+1];}
              n--;            //删除后元素个数减少 
              i--;            //判断点前移，继续判断i之后是否有相等的数 
          
     } 
  }
  return n;               //将删除后的数据个数返回 
} 
int main()
{  int b[]={1,1,1,2,2,2,3,3,4,4,4,5,5,6,6,6,6},i,n;
    n=sizeof(b)/sizeof(b[0]);
    n=del(b,n);             //调用del函数，返回删除后数组元素的个数
	cout<<"删除相同数据后的数组为:\n";
	for(i=0;i<n;i++)
	{  cout<<b[i]<<'\t';}   
	cout<<endl;
	return 0;
}
