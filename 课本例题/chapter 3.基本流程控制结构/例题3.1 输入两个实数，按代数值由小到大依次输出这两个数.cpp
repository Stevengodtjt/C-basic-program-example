#include<iostream>
using namespace std;
int main()
{   float a,b,t;                    //定义变量
    cout<<"请输入两个实数：\n";      //在屏幕上输出提示信息
	cin>>a>>b;                       //给变量赋值
	if(a>b)                          //如果前一个变量大于后一个变量
	{    t=a;a=b;b=t;   }            //利用第三个变量交换数据
	cout<<a<<'\t'<<b<<endl;          //依次输出变量
	return 0; 
}
