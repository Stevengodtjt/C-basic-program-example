#include<iostream>
using namespace std;
inline int del(int a[],int n)
{    int i,j;
      for(i=0;i<n-1;i++)
      {   if(a[i]==a[i+1])
              {  for(j=i;j<n-1;j++)
                  a[j]=a[j+1];
				  n--;
                  i--;
              }
              
      }
      return n;
}
int main()
{   int a[8]={1,1,1,2,2,2,3,4};
    int  c=del(a,8);
    for(int i=0;i<c;i++)
	cout<<a[i]; 
}
