#include<iostream>
using namespace std;
int add( int a,int b)
{return a+b; }
int main()
{   int x=2,y=3,t;
    int (*p)(int,int);      //定义函数指针
	p=add;                  //将add函数入口地址赋给函数指针
	t=p(x,y);               //通过函数指针调用add函数
	cout<<t<<endl;
	return 0; 
}
