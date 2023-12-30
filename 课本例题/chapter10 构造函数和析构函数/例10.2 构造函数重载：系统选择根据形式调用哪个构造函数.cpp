#include<iostream>
#include<cmath>
using namespace std;
class Tri
{   private:
	  double a,b,c;
	public:
		Tri(double x,double y,double z)  //A三个参数的构造函数 
		{a=x;  b=y;  c=z;}
		
		Tri(double x)                    //B一个参数的构造函数 
		{a=b=c=x;}
		
		double Peri(void)
		{return a+b+c;}
};
int main()
{  Tri tria(3,4,5);                     //C 调用A行构造函数
   Tri trib(6);                         //D 调用B行构造函数
   cout<<"tria的周长为:"<<tria.Peri()<<endl;
   cout<<"trib的周长为:"<<trib.Peri()<<endl;
   return 0; 
}
