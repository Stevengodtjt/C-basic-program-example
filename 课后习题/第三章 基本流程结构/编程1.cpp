#include<iostream>
using namespace std;
int main()
{  float x,y;
   cout<<"ÔÚÆÁÄ»ÉÏÊä³öx:";
   cin>>x; 
   if(x<0)
   { y=x*x;
     cout<<"y="<<y;
   }
    if(x>=0&&x<1)
      { y=2.5*x-1;
        cout<<"y="<<y;
      }
        if(x>=1)
          { y=3*x+1;
            cout<<"y="<<y;
          }
          return 0;
} 
