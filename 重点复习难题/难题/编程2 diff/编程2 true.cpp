#include<iostream>
using namespace std;
int main()
{   int a,b,c,d,e,x,i,j=0,k;
    cout<<"������һ����x:";
    cin>>x;
    if(x>0&&x<=99999)
 {
     k=x;
     do
    {  i=k/10;
       k=k/10;
       j=j++;
    }while(i>0);
     cout<<"xΪ"<<j<<"λ��";
     cout<<'\n';
     
	e=x/10000;
    d=x%10000/1000;
    c=x%1000/100; 
    b=x%100/10;
    a=x%10; 
    k=a+b+c+d+e;
    cout<<"x�ĸ���λ��֮��Ϊ:"<<k;
 }
    else cout<<"x��������"; 
	return 0; 
}
