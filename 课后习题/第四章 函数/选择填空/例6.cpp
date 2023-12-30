#include<iostream>
using namespace std;
int f(int x)
{ int y;
  if(x==0||x==1) return 3;
  y=x*x-f(x-2);
  return y;
}
int main()
{  cout<<f(3)<<endl;
   return 0;
}
