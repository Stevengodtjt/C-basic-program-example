#include<iostream>
#include<cmath>
using namespace std;
class Tri
{   private:
	  double a,b,c;
	public:
		Tri(double x=5,double y=5,double z=5)  //����ΪĬ��ֵ�Ĺ��캯�� 
		{a=x;  b=y;  c=z;}
		
		double Peri(void)
		{return a+b+c;}
};
int main()
{  
   Tri tria;                     //�൱��Tri tria(5,5,5)   
   Tri trib(3);                  //�൱��Tri tria(3,5,5) 
   Tri tric(3,4);                 //�൱��Tri tria(3,4,5) 
   Tri trid(3,4,4);              //�൱��Tri tria(3,4,4) 
   cout<<"tria���ܳ�Ϊ:"<<tria.Peri()<<endl;
   cout<<"trib���ܳ�Ϊ:"<<trib.Peri()<<endl;
   cout<<"tric���ܳ�Ϊ:"<<tric.Peri()<<endl;
   cout<<"trid���ܳ�Ϊ:"<<trid.Peri()<<endl;
   return 0; 
}
