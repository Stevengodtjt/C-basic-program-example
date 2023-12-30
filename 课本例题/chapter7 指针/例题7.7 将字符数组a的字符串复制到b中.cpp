#include<iostream>
using namespace std;
int main()
{  char a[100]="Hello,world",b[100]="khfeoijefifeoief";
   char *p1=a,*p2=b;
   while(*p1)
   {  *p2++=*p1++;
   }
   *p2='\0';
   cout<<b<<endl;
   return 0;
}
