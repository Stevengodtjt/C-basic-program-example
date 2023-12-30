#include<iostream>
using namespace std;
void fun(int n,int *s)
{ int f;
  if(n==1)  *s=n+1;
  else
  { fun(n-1,&f);
    *s=f;
  }
}
int main()
{ int x=0;
   fun(4,&x);
   cout<<x<<endl;
   return 0;
}
