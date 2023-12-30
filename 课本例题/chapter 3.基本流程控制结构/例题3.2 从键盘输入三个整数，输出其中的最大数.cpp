#include<iostream>
using namespace std;
int main()
{    int a,b,c,t;
     cout<<"输入三个整数：";
	 cin>>a>>b>>c;
	 cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"c="<<c<<'\n';
	 if(a>b) t=a;
	 else t=b;
	 cout<<"最大数是：";
	 if(t>c)cout<<t<<'\n';
	 else cout<<c<<'\n';
	 return 0; 
	  
}
