#include<iostream>
#include<cstring>
using namespace std;
 
void insert(char str[], char substr[], int n)//��substr���뵽str�ĵ�n���ַ���
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
	cout<<"�������һ���ַ���: ";
	cin.getline(str,100);
	cout<<"������ڶ����ַ���: ";
	cin.getline(substr,100);
	cout<<"���ַ���"<<substr<<"���뵽�ַ���"<<str<<"�ĵڼ����ַ���? ";
	cin>>n;
	insert(str,substr,n);
	cout<<"�������ַ���Ϊ: "<<str<<endl;
	return 0;
}
