#include<iostream>
#include<cstring>
using namespace std;
class X
{  char *a;
    public:
      X(char *aa="abc")
      {  a=new char[strlen(aa)+1];
         strcpy(a,aa);
      }
      ~X()  {cout<<a<<"±»ÊÍ·Å"<<endl;  delete []a;}
      char *Geta()  {return a;}
} ;
int main()
{   char *p1="1234";
    X s1,s2(p1);
    cout<<s1.Geta()<<s2.Geta()<<endl;
    return 0;
}
