#include<iostream>
#include<cmath>
using namespace std;
float fun(float a,float b,float c)
{  float area,s;
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   return area;
}
int main()
{  float a,b,c;
   cout<<"输入三角形三边a,b,c:"; 
   cin>>a>>b>>c;
   cout<<'\n';
   cout<<"三角形的面积为:"<< fun(a,b,c);
   return 0;
   
}
