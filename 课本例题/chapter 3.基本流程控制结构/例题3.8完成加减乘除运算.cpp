#include<iostream>
using namespace std;
int main()
{   float data1,data2;
    char op;
    cout<<"输入数据，格式为:操作数1  运算符  操作数2:"<<'\n';
	cin>>data1>>op>>data2;                                       //从键盘上输入的运算符存放在字符型变量op中
	switch(op)
	{
	case'+':cout<<data1<<op<<data2<<"="<<data1+data2<<'\n';
	     break;
	case'-':cout<<data1<<op<<data2<<"="<<data1-data2<<'\n';
	     break;
	case'*':cout<<data1<<op<<data2<<"="<<data1*data2<<'\n';
	     break;
	case'/':      if(data2)
	              {cout<<data1<<op<<data2<<"="<<data1/data2<<'\n';}
	              else{cout<<"除数为0!"<<'\n'; 
	              }      
	              break;
    default:cout<<op<<"是一个无效运算符\n"; 
	return 0;      
	} 
}
