#include<iostream>
using namespace std;
int main()
{   int a,b;
    int *p1,*p2,*p;
    p1=&a;
    p2=&b;
    cout<<"������������:";
	cin>>a>>b;
	if(a<b)
	{p=p1; p1=p2; p2=p; }         //����p1��p2��ֵ
	cout<<"����С˳�����:";
	cout<<*p1<<'\t'<<*p2<<endl;
	cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
	return 0; 
}
