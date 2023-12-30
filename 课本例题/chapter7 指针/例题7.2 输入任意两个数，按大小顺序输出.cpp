#include<iostream>
using namespace std;
int main()
{   int a,b;
    int *p1,*p2,*p;
    p1=&a;
    p2=&b;
    cout<<"请输入两个数:";
	cin>>a>>b;
	if(a<b)
	{p=p1; p1=p2; p2=p; }         //交换p1、p2的值
	cout<<"按大小顺序输出:";
	cout<<*p1<<'\t'<<*p2<<endl;
	cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
	return 0; 
}
