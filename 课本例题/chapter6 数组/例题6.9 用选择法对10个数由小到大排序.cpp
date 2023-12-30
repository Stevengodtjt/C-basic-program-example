#include<iostream>
using namespace std;
void sort(int a[],int n)     //选择法排序
{  int i,j,min,t;
   for(i=0;i<n-1;i++)
   {  min=i;                  //设置min的初值
      for(j=i+1;j<n;j++)
	   { if(a[min]>a[j])      //循环找出最小值的序号赋给min 
	      min=j;
	   }  
		 t=a[i];            //交换a[i]和a[min] 
         a[i]=a[min];
         a[min]=t;
	   
   }
} 
int main()
{   int b[]={9,9,4,0,2,5,8,2},i,n;
    n=sizeof(b)/sizeof(b[0]);         //sizeof用于求字节数
	sort(b,n);                        //用选择法排序函数
	cout<<"排序后的数组如下:"<<'\n';
	for(i=0;i<n;i++)
	{ cout<<b[i]<<'\t';
	} 
	cout<<endl;
	return 0;
}
