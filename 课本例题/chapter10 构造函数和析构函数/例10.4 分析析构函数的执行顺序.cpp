#include<iostream>
using namespace std;
class Tri
{   private:
	  double a,b,c;
	public:
		Tri(double x,double y,double z)  //A���������Ĺ��캯�� 
		{  a=x;  b=y;  c=z;
		   cout<<"�߳���"<<a<<'\t'<<b<<'\t'<<c<<"�������ε��ù��캯��"<<endl; 
		}

        ~Tri()                           //�������� 
        {cout<<"�߳���"<<a<<'\t'<<b<<'\t'<<c<<"�������ε�����������"<<endl;}
};
int main()
{  Tri tria(3,4,5);               
   Tri trib(6,6,6);
   cout<<"main����"<<endl;
   return 0; 
}
