#include<iostream>
#include<cmath>
using namespace std;
class  Tri  //三角形类Tri
{
	private:
	   double  a,b,c ;  		//三个私有成员数据，表示三角形的三边
	public:
	  void Setabc(double, double, double);       //  重载成员函数，设置三边边长
	  void Setabc(double);                      //  重载成员函数，设置等边三角形的边长
       double Peri(void); 		                //求三角形的周长的函数声明
	  double Area(void); 		               //求三角形的面积的函数声明
}; 

void Tri::Setabc(double x, double y, double z)	//设置三角形三边的边长
{a=x;b=y;c=z;	} 
void Tri::Setabc(double x)	                   //B设置等边三角形边长，不能再出现默认参数值
{	a=b=c=x;	}
double Tri::Peri(void)                        //求三角形的周长，周长作为函数值返回
{	return a+b+c;	}
double Tri::Area(void)                       //求三角形的面积，面积作为函数值返回
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}

int main()
{	Tri  tria,trib; 	  //定义类的对象tria，trib
	tria.Setabc(3,4,5);	  //C 利用默认的参数值5设置等边三角形的边长
	trib.Setabc(5);	      //D 利用实际的参数值4设置等边三角形的边长
	cout<<"tria的周长为: "<<tria.Peri()<<'\t'<<"面积为: "<<tria.Area()<<endl;
	cout<<"trib的周长为: "<<trib.Peri()<<'\t'<<"面积为: "<<trib.Area()<<endl;
	return 0;
}

