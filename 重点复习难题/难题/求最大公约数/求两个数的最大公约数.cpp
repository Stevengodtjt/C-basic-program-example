#include<iostream>
using namespace std;
int main()
{ int m,n,r,t;
 cout << "输入两个正整数m和n:";
 cin>>m>>n;
 if(m<n)   {t=m; m=n; n=t;}
   do
    { r=m%n;
      m=n;
      n=r;
    } while(r!=0);
    cout<<"m,n的最大公约数为："<<m<<endl;
     return 0;
}


