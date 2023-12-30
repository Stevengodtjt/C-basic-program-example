#include<iostream>
#include<cmath>
using namespace std;
class Root           //类名，求一元二次方程 
{  
   double a,b,c;      //方程系数
  public:
    void Setroot(double x,double y,double z);   //设置方程系数
	void fun();                                 //求方程的解并且输出 	 
};
void Root::Setroot(double x,double y,double z)
{ a=x;
  b=y;
  c=z;
}

void Root::fun()                              //利用上述算法求解 
{ double delta;
  delta=b*b-4*a*c;
  if(delta<0) cout<<"方程无实根!\n";
  else
  { delta=sqrt(delta);
    if(delta)
    {  cout<<"方程有两个不等实根:\n";
	   cout<<"x1="<<(-b+delta)/2/a<<'\n';
	   cout<<"x2="<<(-b-delta)/2/a<<'\n'; 
    }
    else
    { cout<<"方程有两个相等实根:\n";
	  cout<<"x1=x2="<<-b/2/a<<'\n'; 
    }
  } 
}
int main()
{  Root root;
   double x,y,z;              //定义一个一元二次方程对象
   cout<<"请输入方程的三个系数:";
   cin>>x>>y>>z;
   root.Setroot(x,y,z);        //为该对象的系数赋值
   root.fun();                 //求方程的解并输出
   return 0; 
}
