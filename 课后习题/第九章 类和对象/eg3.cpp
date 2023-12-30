#include<iostream>
using namespace std;
class Sample
{  int x,y;
   public:
   	 void Setxy(int i=0,int j=0)
   	 {x=i; y=j;}
   	 void copy(Sample &A)
   	  { if(this==&A)
   	     {  cout<<"不能将一个对象复制到自己本身"<<endl;
			return; 
   	     }
   	     else *this=A;
   	  }
   	  
	  void display()
	  {cout<<"x="<<x<<'\t'<<"y="<<y<<endl;}
};
int main()
{   Sample c1,c2;
     c1.Setxy(10,20);
	 c2.Setxy();
	 c2.display();
	 c2.copy(c1);
	 c2.display();
	 c2.copy(c2);
	 c2.display();
	 return 0;
}
