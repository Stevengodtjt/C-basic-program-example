#include<iostream>
using namespace std;
class ONE
{  int c;
    public:
     ONE():c(0)  {cout<<1;}
     ONE(int n):c(n)  {cout<<2;}
}; 
class TWO
{   ONE one1;
    ONE one2;
      public:
       TWO(int m):one2(m)  {cout<<3;}
};
int main()
{  TWO t(4);
   return 0;
}

