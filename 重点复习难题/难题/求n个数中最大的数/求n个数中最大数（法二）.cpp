#include<iostream>
using namespace std;
int main()
{ int n;
    cout<<"���������ָ���:"<<'\n';
    cin>>n;
    cout<<"������"<<n<<"������:"<<'\n';
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
	cout<<"�������"<<i;
return 0;
}
