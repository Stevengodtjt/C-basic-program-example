#include<iostream>
#include<cmath>
using namespace std;
double mycos(double x)
{ int n=1;
  double sum=0,term=1.0;
  while(fabs(term)>=1e-6)
  {sum=sum+term;
   term=term*(-1)*x*x*x/(n)/(n+1);
   n=n+2;
  }
  return sum;
}
int main()
{ double x;
  cout<<"x=";
  cin>>x;
  cout<<"mycos(x)="<<mycos(x)<<'\n';
  return 0;
}

