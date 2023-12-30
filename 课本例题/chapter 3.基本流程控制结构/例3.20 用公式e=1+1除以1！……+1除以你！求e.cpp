#include<iostream>
using namespace std;
int main()
{  double e=1.0,t=1.0;
   int n=1;
   while(t>=1e-7)
   {  t=t/n;
      e=e+t;
      n++;
   }
   cout<<"e="<<e<<endl;
   return 0;
}
