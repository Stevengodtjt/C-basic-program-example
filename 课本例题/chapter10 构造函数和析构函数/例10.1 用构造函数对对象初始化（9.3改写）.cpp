#include<iostream>
#include<cmath>
using namespace std;
class Tri
{  private:
	 double a,b,c;
	public:
	  Tri(double x,double y,double z)  //A���캯���������������߽��г�ʼ�� 
	  {a=x; b=y; c=z;}                 //���β�x��y��z��ֵ��ʼ������������
	  
	  double Peri(void)
	  {return a+b+c;}
	  
	  double Area(void)
	  { double t=(a+b+c)/2;
	     double s;
		 s=sqrt(t*(t-a)*(t-b)*(t-c));
		 return s;
	  }
};
int main()
{   Tri tria(3,4,5);                  //B���������ζ��󣬵��ù��캯����tria�����ε����߳�ʼ��
   Tri trib(5,5,5);                  //C���ù��캯����trib�����ε����߳�ʼ�� 
   cout<<"tria���ܳ�Ϊ:"<<tria.Peri()<<'\t'<<"���Ϊ:"<<tria.Area()<<endl;
   cout<<"trib���ܳ�Ϊ:"<<trib.Peri()<<'\t'<<"���Ϊ:"<<trib.Area()<<endl;
   return 0; 
}

