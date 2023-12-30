#include<iostream>
using namespace std;
int main()
{  int a[6]={1,3,5,7,9,11},i,j,x;
   cout<<"原数组是:\n";
   for(i=0;i<=5;i++)
   { cout<<a[i]<<'\t';
   } 
   cout<<'\n'; 
   cout<<"请输入想要删除的数据:";
   cin>>x;
   for(i=0;i<=5;i++)
   {  if(a[i]==x)                //找删除点 
     { for(j=i;j<=4;j++)        
        {  a[j]=a[j+1]; }         //从删除点后的数据开始依次向前覆盖 
         break;                  //覆盖完数据后退出循环 
        
	 } 
   } 
   if(i==6)
     cout<<"数组中没有要删除的数据\n";
   else
   { cout<<"删除数据"<<x<<"后的数组为:\n";
     for(i=0;i<=4;i++)
	 { cout<<a[i]<<'\t';
	 } 
   } 
   return 0;
}
