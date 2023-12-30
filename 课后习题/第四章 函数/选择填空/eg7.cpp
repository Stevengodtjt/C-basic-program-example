#include<iostream>
using namespace std;
int a=0;
void fun()
{ int a=10;
  cout<<(::a-=--a)<<'\n';
} 
int main()
{  int a=10;
   for(int i=-10;i<a+::a;i++)
   fun();
   return 0;
}
