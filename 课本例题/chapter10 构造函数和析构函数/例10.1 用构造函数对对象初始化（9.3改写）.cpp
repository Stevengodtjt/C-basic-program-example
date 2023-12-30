#include<iostream>
#include<cmath>
using namespace std;
class Tri
{  private:
	 double a,b,c;
	public:
	  Tri(double x,double y,double z)  //A构造函数，对三角形三边进行初始化 
	  {a=x; b=y; c=z;}                 //用形参x、y、z的值初始化三角形三边
	  
	  double Peri(void)
	  {return a+b+c;}
	  
	  double Area(void)
	  { double t=(a+b+c)/2;
	     double s;
		 s=sqrt(t*(t-a)*(t-b)*(t-c));
		 return s;
	  }
};
int main()
{   Tri tria(3,4,5);                  //B创建三角形对象，调用构造函数对tria三角形的三边初始化
   Tri trib(5,5,5);                  //C调用构造函数对trib三角形的三边初始化 
   cout<<"tria的周长为:"<<tria.Peri()<<'\t'<<"面积为:"<<tria.Area()<<endl;
   cout<<"trib的周长为:"<<trib.Peri()<<'\t'<<"面积为:"<<trib.Area()<<endl;
   return 0; 
}

