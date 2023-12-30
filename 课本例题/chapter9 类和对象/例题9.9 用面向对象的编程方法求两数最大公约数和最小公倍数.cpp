#include<iostream>
using namespace std;
class Num               //类名，求两数的最大公约数和最小公倍数 
{                   
     int x,y;           //私有数据 
  public:
  	void Setxy(int a,int b);   //为两数x、y赋值
	int gys();                 //求最大公约数
	int gbs();                 //求最小公倍数
};
void Num::Setxy(int a,int b)
{x=a;y=b;}
int Num::gys()              //欧几里得算法
{  int r,m,n;
   m=x;
   n=y;
   if(m<n)
   {r=m; m=n; n=r;}
   while(r!=0)
   {  r=m%n;
      m=n;
      n=r;
   }
   return m;                   //返回最大公约数 
}
   int Num::gbs()
   {  int r=gys();
      return x*y/r;
   }
  int main()                 //开始步骤2 
  {  Num num;                //定义类的对象 
     int a,b;
     cout<<"请输入两个整数:";
	 cin>>a>>b;
	 num.Setxy(a,b);         //对类的对象赋值 
	 cout<<a<<","<<b<<"的最大公约数是:"<<num.gys()<<'\t';
	 cout<<"最小公倍数是:"<<num.gbs()<<endl;
	 return 0; 
  }
