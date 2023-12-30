#include<iostream>
using namespace std;
int main()
{ int n;
    cout<<"请输入数字个数:"<<'\n';
    cin>>n;
    cout<<"请输入"<<n<<"个数字:"<<'\n';
    int a,b,i,c;
    cin>>a;
    cin>>b;
    if (a>=b) {i=a;} 
    if (a<b)   {i=b;} 
    for(;n>=3;n--)
    {cin>>c;
     if(c>=i)   {i=c;} 
     if(c<i)    {i=i;} 
    }  
	cout<<"最大数："<<i;
return 0;
}
