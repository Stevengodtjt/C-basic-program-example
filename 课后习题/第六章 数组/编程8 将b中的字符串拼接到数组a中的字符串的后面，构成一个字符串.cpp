#include <iostream>
using namespace std;
int strcat(char a[],char b[])
{
	int i=0,j=0;
	while(a[i])
		  i++;
	while(a[i++]=b[j++]);
}
int main()
{
	char a[80],b[80];
	cout<<"�����������ַ���: ";
	cin.getline (a,80);
	cin.getline(b,80);
	cout<<"�ַ���aΪ: "<<a<<endl;
	cout<<"�ַ���bΪ: "<<b<<endl;
	strcat(a,b);
	cout<<"�ַ���a+bΪ:"<<a<<endl; 
	return 0;
}

