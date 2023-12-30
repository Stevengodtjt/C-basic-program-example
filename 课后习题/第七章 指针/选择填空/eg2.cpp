#include<iostream>
using namespace std;
void fun(int *p1,int *p2)
{ int t;
  if(p1<p2)
  { t=*p1;
    *p1=*p2;
    *p2=t;
    fun(p1+=2,p2-=2);
  }
}
int main()
{ int i,a[6]={1,2,3,4,5,6};
  fun(a,a+5);
  for(i=0;i<=5;i++)
  cout<<a[i]<<'\t';
  return 0;
}
