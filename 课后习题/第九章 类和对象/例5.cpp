#include<iostream>
#include<cmath>
using namespace std;
class CPoint
{  double x,y;
 public:
 	void Setxy(double dx,double dy)  //��������
	 {x=dx; y=dy;} 
	 double Radius() //ȡ������뾶
	 { return sqrt(x*x+y*y);} 
};
int main()
{  CPoint p;
   double x,y;
   cin>>x>>y;
   p.Setxy(x,y);
   cout<<p.Radius()<<endl;
   p.Setxy(x+5,y+5);
   x=x+5;
   y=y+5;
   cout<<x<<'\t'<<y<<endl;
   cout<<p.Radius()<<endl;
   return 0;
}
