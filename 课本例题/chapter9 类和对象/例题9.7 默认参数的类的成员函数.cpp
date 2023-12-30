#include<iostream>
#include<cmath>
using namespace std;
class  Tri  				   //三角形类Tri
{
	private:
		double  a,b,c ;  	  //三个私有成员数据，表示三角形的三边
	public:
		void Setabc(double=5);	         //A设置三等边角形三边长的函数声明，默认参数值只能出现一次 
		double Peri(void); 				//求三角形的周长的函数声明
		double Area(void); 				//求三角形的面积的函数声明
}; 
void Tri::Setabc(double x)             //B设置等边三角形边长，不能再出现默认参数值 
 {	a=b=c=x;	}  
double Tri::Peri(void) 					//求三角形的周长，周长作为函数值返回
{	return a+b+c;	}
double Tri::Area(void) 					//求三角形的面积，面积作为函数值返回
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}			

int main()
{	Tri  tria, trib; 			 //定义两个具体的Tri类的对象
	tria.Setabc(); 		        //C利用默认的参数值5设置三角形对象tria的三边边长
	trib.Setabc(4);		        //D利用实际参数值4设置三角形对象trib的三边边长
    cout<<"tria的周长为:"<<tria.Peri()<<'\t'<<"面积为:"<<tria.Area()<<endl; 
    cout<<"trib的周长为:"<<trib.Peri()<<'\t'<<"面积为:"<<trib.Area()<<endl; 
	return 0;
}

