#include<iostream>
using namespace std;
int fun(int a)
{ int i,prime=1;
   for(i=2;i<a;i++)
    { if(a%i==0) prime=0;
    }
    return prime;
}
int main()
{   int j,x,num=0;
    for(j=100;j<=200;j++)
       { x=fun(j);
           if(x==1)
         {cout<<j<<'\t';
          num++; 
          if(num%5==0)     //只有输出素数才需要判断是否需要换行 
            {cout<<'\n';} 
         } 
       } 
 return 0;
}

