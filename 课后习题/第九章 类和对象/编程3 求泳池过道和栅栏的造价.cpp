#include<iostream>
using namespace std;
# define PI 3.14159
class Circle
{   private:
	  double r;
	public:
		void Setr(double x);
		double Area1(void);          //�������� 
		double Peri2(void);         //����Ӿ���ܳ� 
		
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
     cout<<"������Ӿ�ذ뾶:";
	 cin>>r;
	 circle.Setr(r);
	 cout<<"���������Ҫ:"<<circle.Area1()*20<<"Ԫ"<<endl; 
	 cout<<"����դ����Ҫ:"<<circle.Peri2()*35<<"Ԫ"<<endl;
      return 0;
      
  }
