#include<iostream>
#include<cmath>
using namespace std;
class  Tri  //三角形类Tri
{private:
	double  a,b,c ;  //三个私有成员数据，表示三角形的三边
 public:
	void Setabc(double , double , double );	// 设置三角形三边的边长的函数声明
	double Peri(void);                      //求三角形的周长的函数声明
	double Area(void);                     //求三角形的面积的函数声明
}; 
void Tri::Setabc(double x, double y, double z)	//设置三角形三边的边长
{a=x;b=y;c=z;	}  
double Tri::Peri(void)                        //求三角形的周长，周长作为函数值返回
{	return a+b+c;	}
double Tri::Area(void)                       //求三角形的面积，面积作为函数值返回
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}		


int main()
{ Tri  tria; 	       //定义类的对象tria
  Tri  &t=tria;        //A 定义对象tria的引用变量，t是对象tria的另一个名字
   t.Setabc(3, 4, 5);	//利用引用变量设置三角形对象tria的三边边长
   cout<<"tria的周长为: "<<t.Peri()<<'\t'<<"面积为: "<<t.Area()<<endl;
   return 0;
}

