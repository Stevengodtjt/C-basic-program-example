#include<iostream>
using namespace std;
int main()
{   int n,max,k,i,a,j;
    cout<<"输入n个数:";
    cin>>n;
    cout<<'\n';
    cout<<"输入第一个数k:";
    cin>>k;
    max=k;
    a=n-1;
    cout<<"输入剩下"<<a<<"个数:";
    for(i=1;i<n;i++)
    {   cin>>j;
        if(max<j)    {max=j;} 
    }
        cout<<"最大值为"<<max;
  }
