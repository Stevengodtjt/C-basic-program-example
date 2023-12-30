#include<iostream>
using namespace std;
int main()
{   float y=5.8;
    int x;
    x=(int)y;   //y的值与类型均不变，但生成中间值5赋给x
	cout<<"x="<<x<<'\t'<<"y="<<y<<'\n';
	return 0; 
}
