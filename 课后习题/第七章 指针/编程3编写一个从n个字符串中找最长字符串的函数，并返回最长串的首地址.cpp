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
  cout<<"����n���ַ���,nΪ:";
  cin>>n;
  cout<<"�����ַ���:";
  char *a[n];
  for(i=0;i<n;i++)
  {  cin>>a[i];
  } 
  p=*longstr(*a[n],n);
  cout<<"��ַ����׵�ַΪ:"<<p;
  return 0; 
}
