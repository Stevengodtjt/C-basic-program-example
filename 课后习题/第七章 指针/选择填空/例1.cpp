#include<iostream>
using namespace std;
void ww(int *x)
{  cout<<++*x<<endl;
}
int main()
{ int a=24;
 ww(&a);
 return 0;
}

