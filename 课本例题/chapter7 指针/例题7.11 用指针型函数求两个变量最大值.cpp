#include<iostream>
using namespace std;
int *max(int *p1,int *p2)
{  if(*p1>*p2)  return p1;
   else return p2;
}
int main()
{   int a,b,*p;
    cout<<"������������:";
    cin>>a>>b;
    p=max(&a,&b);
    cout<<a<<"��"<<b<<"�е�������Ϊ:"<<*p<<endl;
	 return 0; 
}
