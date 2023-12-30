#include<iostream> 
#include<cmath>
using namespace std;
struct point
{  double a;
   double b;
};
int main()
{ point p1,p2;             //定义结构体变量 
 cout<<"输入一个横坐标";
 cin>> p1.a;
 cout<<"输入一个纵坐标";
 cin>>p1.b;
 cout<<"输入一个横坐标";
 cin>>p2.a;
 cout<<"输入一个纵坐标";
 cin>>p2.b;
 cout<<"距离为："<<sqrt((p1.a-p2.a)*(p1.a-p2.a)+(p1.b-p2.b)*(p1.b-p2.b));
 return 0;
}



