#include<iostream>
using namespace std;
int *max(int *p1,int *p2)
{  if(*p1>*p2)  return p1;
   else return p2;
}
int main()
{   int a,b,*p;
    cout<<"请输入两个数:";
    cin>>a>>b;
    p=max(&a,&b);
    cout<<a<<"和"<<b<<"中的最大的数为:"<<*p<<endl;
	 return 0; 
}
