#include<iostream>
#include<cmath>
using namespace std;
class  Tri  				//三角形类Tri
{
	private:
		double  a,b,c ;  	//三个私有成员数据，表示三角形的三边
	public:
		void Setabc(double , double , double );	//设置三角形三边的边长的函数声明
		double Peri(void); 				       //求三角形的周长的函数声明
		double Area(void); 				       //求三角形的面积的函数声明
		void Show(void);				      //输出三角形对象的参数的函数声明
}; 
void Tri::Setabc(double x, double y, double z)
 {	a=x;		b=y;		c=z;	}  
double Tri::Peri(void) 					//求三角形的周长，周长作为函数值返回
{	return a+b+c;	}
double Tri::Area(void) 					//求三角形的面积，面积作为函数值返回
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}			
void Tri::Show(void)			       //输出三角形对象参数的公有成员函数
{	cout<<"三角形的三边长分别为:"<<a<<'\t'<<b<<'\t'<<c<<'\t';
	cout<<"周长为:"<<Peri()<<'\t'<<"面积为:"<<Area()<<endl; 	//调用成员函数Peri()，Area()
}

int main()
{	Tri  tria, trib; 			//定义两个具体的Tri类的对象
	tria.Setabc(3, 4, 5); 		//设置三角形对象tria的三边边长
	trib.Setabc(5, 5, 5);		//设置三角形对象trib的三边边长
	cout<<"三角形tria的参数是:\n";
	tria.Show();			//调用成员函数，输出tria的参数
	cout<<"三角形trib的参数是:\n";
	trib.Show();			//调用成员函数，输出trib的参数
	return 0;
}

