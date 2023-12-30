#include<iostream>
using namespace std;
class Sample
{  int n;
    public:
      Sample() {}
      Sample(int m) {n=m;}
      Sample square()
      {  n=2*n;
         return *this;
      }
      void disp()
      {cout<<"n="<<n<<endl;}
} ;
int main()
{  Sample a(10);
   a.square();
   a.disp();
   return 0;
}
