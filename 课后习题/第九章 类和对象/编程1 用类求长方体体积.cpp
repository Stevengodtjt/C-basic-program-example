#include<iostream>
using namespace std;
class Square 
{  private: 
     double a,b,c;
   public:
   	  void Setabc(double a,double b,double c );
   	  double Volume(void);                    //�󳤷������� 
};
void Square::Setabc(double x,double y,double z)
{a=x; b=y; c=z;}

double Square::Volume(void)
{return a*b*c;}
int main()
{  Square square;
   double x,y,z;
   cout<<"�����볤����ĳ����:";
   cin>>x>>y>>z; 
   square.Setabc(x,y,z);
   cout<<"����������Ϊ:"<<square.Volume()<<endl;
   return 0; 
}

