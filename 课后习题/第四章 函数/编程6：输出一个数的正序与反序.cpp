#include<iostream>
using namespace std;
void descend(int n)
{if(n==0)
return;
cout<<n%10;
descend(n/10); //反序
}

void ascend(int n)
{if(n==0)
return;
ascend(n/10); //正序
cout<<n%10;
}
int main()
{int n,a;
cout<<"请输入一个整数:"<<'\n';
cin>>n;
cout<<"正序请输入1"<<'\n';
cout<<"反序请输入2"<<'\n';
cin>>a;
if(a==1)
ascend(n);
cout<<'\n';
if(a==2)
descend(n);
return 0; 
}
