#include<iostream>
using namespace std;
void change(int *p1,int *p2)
{  int t;
   t=*p1; *p1=*p2; *p2=t;
} 
int main()
{ int a,b;
  cout<<"请输入两个数:";
  cin>>a>>b;
  if(a<b)  change(&a,&b); 
  cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
  return 0; 
}
