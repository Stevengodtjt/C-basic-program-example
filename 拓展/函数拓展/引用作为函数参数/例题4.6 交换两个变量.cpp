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
  cout<<"����ǰ:a="<<a<<'\t'<<"b="<<b<<'\n';
  swap(a,b);
  cout<<"������:a="<<a<<'\t'<<"b="<<b<<'\n';
  return 0; 
}
