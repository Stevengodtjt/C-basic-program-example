#include<iostream> 
#include<cmath>
using namespace std;
struct point
{  double a;
   double b;
};
int main()
{ point p1,p2;             //����ṹ����� 
 cout<<"����һ��������";
 cin>> p1.a;
 cout<<"����һ��������";
 cin>>p1.b;
 cout<<"����һ��������";
 cin>>p2.a;
 cout<<"����һ��������";
 cin>>p2.b;
 cout<<"����Ϊ��"<<sqrt((p1.a-p2.a)*(p1.a-p2.a)+(p1.b-p2.b)*(p1.b-p2.b));
 return 0;
}



