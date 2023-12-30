#include<iostream>
using namespace std;
void fun(int *p1,int *p2,int *s)
{ s=new int;
  *s=*p1+*(p2++);
}
int main()
{ int a[2]={1,2},b[2]={10,20},*s=a;
  fun(a,b,s);
  cout<<*s<<endl;
  return 0;
}
