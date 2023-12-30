#include<iostream>
using namespace std;
void f(int a,int *b)
{ a++; b++; (*b)++;
  cout<<a<<'\n';            //aµÄÖµÊÇ5 
}
int main()
{ int x[2]={4,4};
  f(x[0],&x[0]);
  cout<<x[0]<<'\t'<<x[1]<<endl;
  return 0;
}
