#include <iostream>
#include<cstring>
using namespace std;
void change(int n, char str[])
{
	int i=0,j;
	int x;
	char ch;
	while(n)
	{
		x=n%16;
		if(x<10)
			str[i]=x+'0';
		else
			str[i]=x-10+'A';
		n=n/16;
		i++;
	}
	str[i]='\0';
	for(i=0,j=strlen(str)-1;i<j;i++,j--)
	{
		ch=str[i];
		str[i]=str[j];
		str[j]=ch;
	}
}
int main()
{
	int n;
	char str[80];
	cout<<"请输入一个十进制整数: ";
	cin>>n;
	change(n,str);
	cout<<n<<"的十六进制数的形式为: "<<str<<"H"<<endl;
	return 0;
}

