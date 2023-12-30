#include<iostream>
using namespace std;
int main()
{   char c;
    cout<<"输入一个字符：";
	cin.get(c);              //A
	if(c<32)
	  cout<<"这是一个控制字符。\n";
	else if(c>='0'&&c<='9')
	  cout<<"这是一个数字字符。\n";
	 else if(c>='A'&&c<='Z')
	  cout<<"这是一个大写字母。\n";
	 else if(c>='a'&&c<='z')
	  cout<<"这是一个小写字母。\n";
	 else cout<<"这是一个其他字符。\n"; 
    return 0;
}
