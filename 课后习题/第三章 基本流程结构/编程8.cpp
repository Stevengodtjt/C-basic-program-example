#include<iostream>
using namespace std;
int main()
{ int m,n,r,t;
 cout << "输入两个正整数m和n:";
 cin>>m>>n;
 if(m<n)   {t=m; m=n; n=t;}
   while(r!=0)
    { r=m%n;
      m=n;
      n=r;
    } 
    cout<<"m,n的最大公约数为："<<m<<endl;
     return 0;
}


