#include<iostream>
using namespace std;
class Tri     //类名
{  private:
	  double a,b,c;        //三个私有成员数据,表示三角形三边
	   public:
	    Tri(double x,double y,double z)   //构造函数
		{  a=x; b=y; c=z;
		   cout<<"边长是"<<a<<'\t'<<b<<'\t'<<c<<"的三角形调用构造函数"<<endl; 
		} 
		Tri()                            //重载无参的构造函数
		{  a=b=c=0;
		   cout<<"边长是"<<a<<'\t'<<b<<'\t'<<c<<"的三角形调用构造函数"<<endl; 
		} 
		~Tri()                             //析构函数 
		{  cout<<"边长是"<<a<<'\t'<<b<<'\t'<<c<<"的三角形调用析构函数"<<endl; }
} ;
int main()
{   Tri *p1,*p2;         //三角形类的指针
    p1=new Tri(3,4,5);    //调用带参数的构造函数，动态创建一个三角形类的对象
	p2=new Tri();         //调用无参数的构造函数，动态创建一个三角形类的对象
	delete p1;            //释放创建的第一个对象
	delete p2;            //释放创建的第二个对象
	cout<<"结束main()函数"<<endl;
	return 0; 
}
