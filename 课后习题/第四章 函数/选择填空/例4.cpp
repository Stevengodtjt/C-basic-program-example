#include<iostream>
using namespace std;
int f(int x)
{  return x*x+1;}
int main()
{  int a,b;
   for(a=0,b=0;a<3;a++)
   {  b=b+f(a);
      cout<<(char)(b+'A');
   }
   return 0;
}
