#include<iostream>
using namespace std;
int main()
{ int m,n,r,t;
 cout << "��������������m��n:";
 cin>>m>>n;
 if(m<n)   {t=m; m=n; n=t;}
   while(r!=0)
    { r=m%n;
      m=n;
      n=r;
    } 
    cout<<"m,n�����Լ��Ϊ��"<<m<<endl;
     return 0;
}


