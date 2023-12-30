#include<iostream>
using namespace std;
# define PI 3.14159
class Circle
{   private:
	  double r;
	public:
		void Setr(double x);
		double Area1(void);          //求过道面积 
		double Peri2(void);         //求游泳池周长 
		
};
  void Circle::Setr(double x)
  { r=x;}
  
  double Circle::Area1()
  { double s;
    s=PI*(r+3)*(r+3)-PI*r*r;
    return s;
  }
    
  double Circle::Peri2()
  {  double c;
      c=2*PI*r;
       return c;
  }
  
  int main()
  {  double price1=20,price2=35,r;
     Circle circle;
     cout<<"输入游泳池半径:";
	 cin>>r;
	 circle.Setr(r);
	 cout<<"建造过道需要:"<<circle.Area1()*20<<"元"<<endl; 
	 cout<<"建造栅栏需要:"<<circle.Peri2()*35<<"元"<<endl;
      return 0;
      
  }
