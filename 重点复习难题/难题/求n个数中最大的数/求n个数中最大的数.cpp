#include<iostream>
using namespace std;
int main()
{   int n,max,k,i,a,j;
    cout<<"����n����:";
    cin>>n;
    cout<<'\n';
    cout<<"�����һ����k:";
    cin>>k;
    max=k;
    a=n-1;
    cout<<"����ʣ��"<<a<<"����:";
    for(i=1;i<n;i++)
    {   cin>>j;
        if(max<j)    {max=j;} 
    }
        cout<<"���ֵΪ"<<max;
  }
