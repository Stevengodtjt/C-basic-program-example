#include<iostream>
using namespace std;
void descend(int n)
{if(n==0)
return;
cout<<n%10;
descend(n/10); //����
}

void ascend(int n)
{if(n==0)
return;
ascend(n/10); //����
cout<<n%10;
}
int main()
{int n,a;
cout<<"������һ������:"<<'\n';
cin>>n;
cout<<"����������1"<<'\n';
cout<<"����������2"<<'\n';
cin>>a;
if(a==1)
ascend(n);
cout<<'\n';
if(a==2)
descend(n);
return 0; 
}
