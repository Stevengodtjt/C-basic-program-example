#include<iostream>
using namespace std;
int main()
{   char c;
    cout<<"����һ���ַ���";
	cin.get(c);              //A
	if(c<32)
	  cout<<"����һ�������ַ���\n";
	else if(c>='0'&&c<='9')
	  cout<<"����һ�������ַ���\n";
	 else if(c>='A'&&c<='Z')
	  cout<<"����һ����д��ĸ��\n";
	 else if(c>='a'&&c<='z')
	  cout<<"����һ��Сд��ĸ��\n";
	 else cout<<"����һ�������ַ���\n"; 
    return 0;
}
