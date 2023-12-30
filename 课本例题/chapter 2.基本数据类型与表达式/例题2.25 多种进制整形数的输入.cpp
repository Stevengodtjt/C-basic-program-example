#include<iostream>
using namespace std;
int main()
{    int a,b,c,d;
     cout<<"请输入4个数据：\n";
	 cin>>hex>>a;               //指明输入的数为十六进制数
	 cin>>oct>>b;               //指明输入的数为八进制数
	 cin>>c;                    //上述指明的数制仍然有效，输入仍为八进制数
	 cin>>dec>>d;               //指明输入为十进制数
	 cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"c="<<c<<'\t'<<"d="<<d<<endl;
	 return 0; 
}
