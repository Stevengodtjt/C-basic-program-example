#include<iostream>
#include<cmath>
#define S(x,y,z)  (x+y+z)/2
#define AREA(x,y,z) sqrt(s*(s-x)*(s-y)*(s-z))
using namespace std;
int main()
{  float a,b,c,s,area;
   cout<<"输入三角形三边a,b,c:"; 
   cin>>a>>b>>c;
   cout<<'\n';
   s=S(a,b,c);
   area=AREA(a,b,c);
   cout<<"三角形的面积为:"<<area;
   return 0;
   
}
