#include<iostream>
#include<cmath>
using namespace std;
struct point
{  float x1,x2;
   float y1,y2;
   float s;
};
int main()
{ 
  point stu;
  cout<<"请输入第一个点的横坐标:";
  cin>>stu.x1;
  cout<<"请输入第一个点的纵坐标:";
  cin>>stu.y1;
  cout<<'\n';
  cout<<"请输入第二个点的横坐标:";
  cin>>stu.x2;
  cout<<"请输入第二个点的纵坐标:";
  cin>>stu.y2;
  stu.s=sqrt((stu.x1-stu.x2)*(stu.x1-stu.x2)+(stu.y1-stu.y2)*(stu.y1-stu.y2));
  cout<<"两点距离为:"<<stu.s;
  return 0;
   
}
