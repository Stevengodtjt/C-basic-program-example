#include<iostream>
using namespace std;
class Square 
{  private: 
     double a,b,c;
   public:
   	  void Setabc(double x,double y,double z )
      {a=x; b=y; c=z;}
   	  double Volume(void)
		 {return a*b*c;}
};

int main()
{  Square square;
   double x,y,z;
   cout<<"请输入长方体的长宽高:";
   cin>>x>>y>>z; 
   square.Setabc(x,y,z);
   cout<<"长方体的体积为:"<<square.Volume()<<endl;
   return 0; 
}
