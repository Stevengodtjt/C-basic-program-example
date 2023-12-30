#include<iostream>
using namespace std;
int main()
{   int a,b,c,x,y;
    cout<<"请输入三个整数:";
	cin>>a>>b>>c;
	for(x=a;x<a*b*c;x++)       //x从小到大逐一测试
	{  if(x%a==0&&x%b==0&&x%c==0)     //公倍数的选择条件 
	     break;
	}
	for(y=a;y>0;y--)
	{  if(a%y==0&&b%y==0&&c%y==0)
	    break;
	}
	cout<<a<<","<<b<<","<<c<<"的最小公倍数:"<<x<<endl;
	cout<<a<<","<<b<<","<<c<<"的最大公约数:"<<y<<endl; 
	return 0; 
}
