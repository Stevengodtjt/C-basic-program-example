#include<iostream>
using namespace std;
void f(int *p,int *q)
{ p+1; *q=*q+1;
}
int main()
{ int m=1,n=2,*r=&n;
f(r,&n);
cout<<m<<','<<n<<endl;
return 0;
}
