#include<iostream>
#define S(a,b)  a*b
using namespace std;
int main()
{   double x=1,y=2;
    double area;
    area=S(x+y,x+y);   //area=x+y*x+y   ��Ҫ��(x+y)*(x+y) ��Ӧarea=S((x+y),(x+y)) 
    cout<<"area="<<area<<endl;
    return 0;
} 
