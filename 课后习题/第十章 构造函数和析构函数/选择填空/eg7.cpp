#include<iostream>
using namespace std;
class Con
{  char ID;
    public:
      char getID()
      {return ID;}
      Con()
      { ID='A'; cout<<1;}
      Con(char id)
	  {ID=id; cout<<2; }
	  Con(Con&c)
	  {ID=c.getID();  cout<<3; }
};
void show(Con c)
{cout<<c.getID();}
int main()
{  Con c1;
   show(c1);
   Con c2('B');
   show(c2);
   return 0;
   
}
