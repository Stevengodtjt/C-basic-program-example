#include<iostream>
using namespace std;
class FAC           //类名，求1！+2！+………+n！ 
{ 
   int n;           //阶乘的最大项数 
   public:
   	void Setn(int m);   // 用m设置n 
   	double Fact(int x);  //求x！，结果作为函数值返回
	double Sum();         //利用x！求1！+2！+……+n！，结果最为函数值返回 
};
void FAC::Setn(int m)
   {n=m;} 
double FAC::Fact(int x)
{  double f=1;
    for(int i=1;i<=x;i++)  f=f*i;   //阶乘算法
	return f; 
}

double FAC::Sum()
{   double s=0;
    for(int i=1;i<=n;i++)
    s=s+Fact(i);                     //调用成员函数Fact求n！
	return s; 
}

int main()
{  FAC fac;
    int m;
    cout<<"请输入一个整数:"; 
    cin>>m;
    fac.Setn(m);                     //为阶乘的项数赋值 
    cout<<m<<"!="<<fac.Fact(m)<<endl;  //求m！
	cout<<"1！+2！+……"<<m<<"!="<<fac.Sum()<<endl;   //求1!+2!+……+m!
	return 0; 
}
