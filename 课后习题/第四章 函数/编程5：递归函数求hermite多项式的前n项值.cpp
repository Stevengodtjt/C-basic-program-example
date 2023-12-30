#include<iostream>
using namespace std;
int fun(int n,int x)
{ int p;
 if(n==0) p=1;
 if(n==1) p=2*x;
 if(n>1)
{p=2*x*fun(n-1,x)-2*(n-1)*fun(n-2,x);}
 return p;
}
int main()
{ int n,x;
 cout << "ÊäÈën,x:";
 cin >> n>>x;
 for(n;n>=0;n--)
 {
cout << "H"<<n<<"("<<x<<")"<<"=:"<<fun(n,x)<<'\n';
 }
 return 0;
}
