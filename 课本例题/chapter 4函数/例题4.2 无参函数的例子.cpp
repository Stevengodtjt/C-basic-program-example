#include<iostream>
using namespace std;
void message(void)
{  cout<<"1.ע�����û�\n";
   cout<<"2.�û���¼\n";
   cout<<"3.ȡ��\n";
   cout<<"����������ѡ��:"; 
}
int main()
{   char ch;
    message();
    ch=cin.get();
    cout<<endl<<"��ѡ���˵�"<<ch<<"��"<<endl;
	return 0; 
}
