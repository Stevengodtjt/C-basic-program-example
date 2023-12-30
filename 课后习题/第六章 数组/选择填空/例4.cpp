#include<iostream>
using namespace std;
int main()
{  int a[]={4,0,6,2,64,1}; 
    int i,j,k,max;
    for(i=0;i<5;i++)
    {  max=i;
	   for(j=i+1;j<6;j++)
         {  if(a[max]<a[j])
             max=j;
         }   
			 k=a[i];
             a[i]=a[max];
             a[max]=k;    
    }  
    for(i=0;i<6;i++)
    {  cout<<a[i]<<'\t';}
    return 0;      
} 
