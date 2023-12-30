#include<iostream>
#include<cstring>
using namespace std;
 
void insert(char str[], char substr[], int n)//将substr插入到str的第n个字符后
{
	char str1[100];
	int len;
	len=strlen(str);
	if(n>=len-1)
	{
		strcat(str,substr);
		return ;
	}
	strcpy(str1,str+n);
	strcpy(str+n,substr);
	strcat(str,str1);
}
int main()
{
	int n;
	char str[100],substr[100];
	cout<<"请输入第一个字符串: ";
	cin.getline(str,100);
	cout<<"请输入第二个字符串: ";
	cin.getline(substr,100);
	cout<<"将字符串"<<substr<<"插入到字符串"<<str<<"的第几个字符后? ";
	cin>>n;
	insert(str,substr,n);
	cout<<"插入后的字符串为: "<<str<<endl;
	return 0;
}
