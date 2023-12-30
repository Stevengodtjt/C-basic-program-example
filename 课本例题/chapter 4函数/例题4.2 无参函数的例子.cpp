#include<iostream>
using namespace std;
void message(void)
{  cout<<"1.注册新用户\n";
   cout<<"2.用户登录\n";
   cout<<"3.取消\n";
   cout<<"请输入您的选择:"; 
}
int main()
{   char ch;
    message();
    ch=cin.get();
    cout<<endl<<"您选择了第"<<ch<<"项"<<endl;
	return 0; 
}
