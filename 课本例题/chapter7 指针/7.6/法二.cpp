#include<iostream>
using namespace std;
void inverse(int a[],int n)
{  int *p,*q;      
   int t,sum=0;
   p=&a[0];
   q=&a[n-1];
   while(sum<n/2)
   {   t=*p;
       *p=*q;        //交换*p和*q 
       *q=t;        
       p++;  q--;    //移动指针变量 
       sum=sum+1;
   } 
}
int main()
{ int a[10]={1,2,3,4,5,6,7,8,9,10};
  inverse(a,10);
  for(int i=0;i<10;i++)
    cout<<a[i]<<'\t';
    return 0;
} 
