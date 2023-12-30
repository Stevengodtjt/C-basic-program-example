#include<iostream>
using namespace std;
int main()
{   int a=1,b=2,c=3,d=0;
    if(a==1&&b++==2)
      if(b!=2||c--!=3)
         {cout<<a<<'\t'<<b<<'\t'<<c<<endl;}
      else
	  {cout<<a<<'\t'<<b<<'\t'<<c<<endl;}
	  return 0;
} 
