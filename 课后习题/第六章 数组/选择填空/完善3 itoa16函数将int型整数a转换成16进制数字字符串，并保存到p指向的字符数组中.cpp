#include<iostream>
using namespace std;
void itoa16(int a,char p[])
{  int i=0,j=0,k,r,t[10];
   if(a<0)  
   { p[j]='-';
     j++;
     a=-a;
   }
   p[j]='0';
   j++;
   p[j]='x';
   j++;
   while(a>0)
   { r=a%16;
      if(r<10)  t[i]=r+'0';
      else t[i]=r-10+'A';
      a=a/16;
      i++;
   }
   for(k=i-1;k>=0;k--,j++) p[j]=t[k];
   p[j]='\0';
}
int main()
{  int a=127;
   char b[10];
   itoa16(a,b);
   cout<<b<<endl;            //127=16*7+15=0x7F
   return 0;
}
