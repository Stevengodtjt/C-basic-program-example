#include<iostream>
#include<cmath>
using namespace std;
int main()
{ float pi,s=0,i,t=1,sign=1;
do
 { i=sign*1.0/t;
    sign=-sign;
     t=t+2;
     s=i+s;
 }while(fabs(i)>=1e-5);
   cout << "s=" << s<<'\n';
   pi=4*s;
   cout << "pi="<<pi;
    return 0;
}



