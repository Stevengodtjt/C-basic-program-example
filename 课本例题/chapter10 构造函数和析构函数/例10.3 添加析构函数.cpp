#include<iostream>
using namespace std;
class Tri
{   private:
	  double a,b,c;
	public:
		Tri(double x,double y,double z)  //A三个参数的构造函数 
		{a=x;  b=y;  c=z;
		   cout<<"调用构造函数"<<endl; 
		}

        ~Tri()                           //析构函数 
        {cout<<"调用析构函数"<<endl;}
};
int main()
{  Tri tria(3,4,5);                     //C 调用A行构造函数
   cout<<"main函数"<<endl;
   return 0; 
}
