#include<iostream>
using namespace std;
class Tri
{   private:
	  double a,b,c;
	public:
		Tri(double x,double y,double z)  //A���������Ĺ��캯�� 
		{a=x;  b=y;  c=z;
		   cout<<"���ù��캯��"<<endl; 
		}

        ~Tri()                           //�������� 
        {cout<<"������������"<<endl;}
};
int main()
{  Tri tria(3,4,5);                     //C ����A�й��캯��
   cout<<"main����"<<endl;
   return 0; 
}
