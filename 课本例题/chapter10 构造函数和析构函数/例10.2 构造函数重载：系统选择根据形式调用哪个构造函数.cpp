#include<iostream>
#include<cmath>
using namespace std;
class Tri
{   private:
	  double a,b,c;
	public:
		Tri(double x,double y,double z)  //A���������Ĺ��캯�� 
		{a=x;  b=y;  c=z;}
		
		Tri(double x)                    //Bһ�������Ĺ��캯�� 
		{a=b=c=x;}
		
		double Peri(void)
		{return a+b+c;}
};
int main()
{  Tri tria(3,4,5);                     //C ����A�й��캯��
   Tri trib(6);                         //D ����B�й��캯��
   cout<<"tria���ܳ�Ϊ:"<<tria.Peri()<<endl;
   cout<<"trib���ܳ�Ϊ:"<<trib.Peri()<<endl;
   return 0; 
}
