#include<iostream>
#include<cstring>
using namespace std;
class XCD
{  char *a;
   int b;
    public:
      XCD(char *aa,int bb)
      {  a=new char[strlen(aa)+1];
         strcpy(a,aa);
         b=bb;
      }
      char *Geta()
      {return a;}
      int Getb()
      {return b;}
};
int main()
{  char *p1="abcd",*p2="weirong";
   int d1=6,d2=8;
   XCD x(p1,d1),y(p1,d2);
   cout<<strlen(x.Geta())+y.Getb()<<endl;
   return 0;
}

