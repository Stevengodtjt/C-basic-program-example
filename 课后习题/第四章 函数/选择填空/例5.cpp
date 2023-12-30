#include<iostream>
using namespace std;
void func(int a,int &b) {a++;b++;} 
int main()
{  int x=0,y=1;
   func(x,y);
   cout<<"x="<<x<<'\t'<<"y="<<y<<endl;
   return 0;
   
}
