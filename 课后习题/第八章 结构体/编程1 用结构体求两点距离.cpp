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
  cout<<"�������һ����ĺ�����:";
  cin>>stu.x1;
  cout<<"�������һ�����������:";
  cin>>stu.y1;
  cout<<'\n';
  cout<<"������ڶ�����ĺ�����:";
  cin>>stu.x2;
  cout<<"������ڶ������������:";
  cin>>stu.y2;
  stu.s=sqrt((stu.x1-stu.x2)*(stu.x1-stu.x2)+(stu.y1-stu.y2)*(stu.y1-stu.y2));
  cout<<"�������Ϊ:"<<stu.s;
  return 0;
   
}
