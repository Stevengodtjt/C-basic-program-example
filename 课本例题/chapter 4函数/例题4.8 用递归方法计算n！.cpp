#include<iostream>
using namespace std;
float fact(int n)
{ float p;
  if(n==0||n==1)  p=1;
  else p=n*fact(n-1);          //��n���ĺ���Ϊfact��n�� 
  return p;
}
int main()
{  int n;
   cout<<"n=";
   cin>>n;
   cout<<n<<"!="<<fact(n)<<'\n';
   return 0;
}
