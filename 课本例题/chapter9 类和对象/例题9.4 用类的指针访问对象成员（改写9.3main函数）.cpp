#include<iostream>
#include<cmath>
using namespace std;
class  Tri             //三角形类Tri
{private:
	double  a,b,c ;    //三个私有成员数据，表示三角形的三边
 public:
	void Setabc(double , double , double );	// 设置三角形三边的边长的函数声明
	double Peri(void);                      //求三角形的周长的函数声明
	double Area(void);                     //求三角形的面积的函数声明
}; 
void Tri::Setabc(double x, double y, double z)	//设置三角形三边的边长
{a=x;b=y;c=z;	}  
double Tri::Peri(void)                      //求三角形的周长，周长作为函数值返回
{	return a+b+c;	}
double Tri::Area(void)                     //求三角形的面积，面积作为函数值返回
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}		

int main()
{  Tri  tria, *p;                 //定义一个具体的Tri类的对象tria和Tri类的指针变量p
    p=&tria;                                 //指针变量指向tria
    p->Setabc(3, 4, 5);     //利用指针变量设置三角形对象tria的三边边长
    cout<<"tria的周长为: "<<p->Peri()<<endl; 
    cout<<"tria的面积为: "<<p->Area()<<endl;
    return 0;
}

