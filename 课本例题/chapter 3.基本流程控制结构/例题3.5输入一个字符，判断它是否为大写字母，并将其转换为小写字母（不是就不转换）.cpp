#include<iostream>
using namespace std;
int main()
{   char ch;
    cout<<"�����һ���ַ�:";
	cin>>ch;
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;
	cout<<ch<<'\n';
	return 0; 
}
