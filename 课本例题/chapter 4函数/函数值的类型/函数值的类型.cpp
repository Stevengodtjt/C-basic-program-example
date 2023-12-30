#include<iostream>
using namespace std;
  double fun(float x)
   { return x*x+2*x+1;
   }
  int main()
  { float x,z;
    cout<<"ÇëÊäÈëx:"; 
    cin>>x;
    z=fun(x);
    cout<<"x*x+2*x+1="<<z;
    return 0;
    
  } 
