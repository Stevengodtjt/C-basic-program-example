#include<iostream>
using namespace std;
int main()
{   int a,b,c,d,e,x,i,j=0,k,t=0,z=0;
    cout<<"请输入一个数x:";
    cin>>x;
    if(x>0&&x<=99999)
 {
     k=x;                           
     t=x; 
     do
    {  t=k%10;
	   i=k/10;                          //eg:    x=1023     t1=3  i1=102  k1=102  z1=3   j1=1
       k=k/10;                           //                 t2=2  i2=10   k2=10   z2=5   j2=2   
       z=z+t;                            //                 t3=0  i3=1    k3=1    z3=5   j3=3   
       j=j++;                            //                 t4=1  i4=0    k4=0    z4=6   j4=4    所以1023为四位数，各个位数之和为6 
    }while(i>0);
     cout<<"x为"<<j<<"位数";
     cout<<'\n';
     
    cout<<"x的各个位数之和为:"<<z;
 }
    else cout<<"x不合题意"; 
	return 0; 
}
