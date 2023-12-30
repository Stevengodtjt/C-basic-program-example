#include<iostream>
using namespace std;
class MyClass
{  public:
	 int number;
	 void set(int);
};
int number=3;                //全局变量number值为3 
void MyClass::set(int i)     //对象初始化 
{ number=i;}
int main()
{  MyClass my1;
   int number=10;         //局部变量number 值为10 
   my1.set(5);
   cout<<my1.number<<endl;
   my1.set(number);
   cout<<my1.number<<endl;
   my1.set(::number);         //引用全局变量的number值 
   cout<<my1.number<<endl;
   return 0;
}
