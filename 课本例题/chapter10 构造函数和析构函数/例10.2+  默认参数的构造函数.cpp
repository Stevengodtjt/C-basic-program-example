#include<iostream>
#include<cmath>
using namespace std;
class Tri
{   private:
	  double a,b,c;
	public:
		Tri(double x=5,double y=5,double z=5)  //参数为默认值的构造函数 
		{a=x;  b=y;  c=z;}
		
		double Peri(void)
		{return a+b+c;}
};
int main()
{  
   Tri tria;                     //相当于Tri tria(5,5,5)   
   Tri trib(3);                  //相当于Tri tria(3,5,5) 
   Tri tric(3,4);                 //相当于Tri tria(3,4,5) 
   Tri trid(3,4,4);              //相当于Tri tria(3,4,4) 
   cout<<"tria的周长为:"<<tria.Peri()<<endl;
   cout<<"trib的周长为:"<<trib.Peri()<<endl;
   cout<<"tric的周长为:"<<tric.Peri()<<endl;
   cout<<"trid的周长为:"<<trid.Peri()<<endl;
   return 0; 
}
