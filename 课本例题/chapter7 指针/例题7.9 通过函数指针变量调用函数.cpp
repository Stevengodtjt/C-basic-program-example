#include<iostream>
using namespace std;
int add( int a,int b)
{return a+b; }
int main()
{   int x=2,y=3,t;
    int (*p)(int,int);      //���庯��ָ��
	p=add;                  //��add������ڵ�ַ��������ָ��
	t=p(x,y);               //ͨ������ָ�����add����
	cout<<t<<endl;
	return 0; 
}
