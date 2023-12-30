#include<iostream>
#define PI 3.1415926        //无分号 
using namespace std;
int main()
{  double area,r,peri;
   cout<<"请输入圆的半径:";
   cin>>r;
   area=PI*r*r;
   peri=2.0*PI*r;
   cout<<"圆的面积为:"<<area<<endl;
   cout<<"圆的周长为:"<<peri<<endl;
   return 0; 
}
 
