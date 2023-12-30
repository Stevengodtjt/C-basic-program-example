#include<iostream>
#include<cstring>
using namespace std;
char *longstr(char *z[],int n)
{  int x,a;
   char *p;
   for(int i=1;i<n;i++)
   {  x=strlen(z[i]);
      a=strlen(z[0]);
      if(a<=x)   p=z[i];
      else p=z[0];
   }
   return p;
}
int main()
{ int n,i,y,p;
  cout<<"输入n个字符串,n为:";
  cin>>n;
  cout<<"输入字符串:";
  char *a[n];
  for(i=0;i<n;i++)
  {  cin>>a[i];
  } 
  p=*longstr(*a[n],n);
  cout<<"最长字符串首地址为:"<<p;
  return 0; 
}
