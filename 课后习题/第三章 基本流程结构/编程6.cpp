#include<iostream>
using namespace std;
int main()
{ int a,b,c,i=100;
 cout << "水仙花数为:" << endl;
 for(i=100;i<=999;i++)
  {  a=i/100;
    b=i%100/10;
    c=i%10;
    if(i==a*a*a+b*b*b+c*c*c) 
    cout<<i<<'\n';
  }
     return 0;
}



