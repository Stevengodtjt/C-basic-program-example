#include<iostream>
using namespace std;
class Tri
{   private:
	  double a,b,c;
	public:
		Tri(double x,double y,double z)  //A三个参数的构造函数 
		{  a=x;  b=y;  c=z;
		   cout<<"边长是"<<a<<'\t'<<b<<'\t'<<c<<"的三角形调用构造函数"<<endl; 
		}

        ~Tri()                           //析构函数 
        {cout<<"边长是"<<a<<'\t'<<b<<'\t'<<c<<"的三角形调用析构函数"<<endl;}
};
int main()
{  Tri tria(3,4,5);               
   Tri trib(6,6,6);
   cout<<"main函数"<<endl;
   return 0; 
}
