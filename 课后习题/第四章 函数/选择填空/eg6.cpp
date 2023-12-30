#include<iostream>
using namespace std;
int a;
int m(int a)
{  static int s;
   return (++s)+(--a);
} 
int main()
{ int a=2;
  cout<<m(m(a));
  return 0;
}
