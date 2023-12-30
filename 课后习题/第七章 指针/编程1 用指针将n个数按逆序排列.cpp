#include<iostream>
using namespace std;
void inverse(int *p,int n)
{  int *q=p+n-1;
    int t;
    while(p<q)
    {  t=*p;
       *p=*q;
       *q=t;
       p++; q--;
    }
}
int main()
{   int *p,n;
    cout<<"请输入一串整数的个数:";
    cin>>n;
	p=new int[n];
	for(int i=0;i<n;i++)
	{   cin>>p[i];} 
    inverse(p,n);
	for(int i=0;i<n;i++)
	{   cout<<p[i]<<'\t';} 	
	return 0;
}	
