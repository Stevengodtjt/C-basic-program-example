#include<iostream>
using namespace std;
int main()
{   int a,b,c,d,e,x,i,j=0,k;
    cout<<"请输入一个数x:";
    cin>>x;
    if(x>0&&x<=99999)
 {
     k=x;
     do
    {  i=k/10;
       k=k/10;
       j=j++;
    }while(i>0);
     cout<<"x为"<<j<<"位数";
     cout<<'\n';
     
	e=x/10000;
    d=x%10000/1000;
    c=x%1000/100; 
    b=x%100/10;
    a=x%10; 
    k=a+b+c+d+e;
    cout<<"x的各个位数之和为:"<<k;
 }
    else cout<<"x不合题意"; 
	return 0; 
}
