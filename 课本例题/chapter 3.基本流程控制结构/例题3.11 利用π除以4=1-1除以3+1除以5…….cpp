#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int i=1,sign=1;           //设置符号标志
    float s=0,t=1;            //累加和为浮点数
	while(fabs(t)>1e-6)       //t的绝对值大于10的负6次方 
	{  t=sign*1.0/i;          //通项的表示
	   sign=-sign;            //符号取反
	   i=i+2;                 //分母进行迭代
	   s=s+t;                 //计算累加和 
	} 
	cout<<"pi="<<4*s<<'\n';
	return 0;
}
