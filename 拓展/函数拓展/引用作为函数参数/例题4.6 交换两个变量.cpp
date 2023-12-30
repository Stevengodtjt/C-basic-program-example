#include<iostream>
using namespace std;
void swap(float &x,float &y)
{  float t;
   t=y;
   y=x;
   x=t;
}
int main()
{ float a=10,b=20;
  cout<<"交换前:a="<<a<<'\t'<<"b="<<b<<'\n';
  swap(a,b);
  cout<<"交换后:a="<<a<<'\t'<<"b="<<b<<'\n';
  return 0; 
}
