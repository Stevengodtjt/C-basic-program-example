#include<iostream>
using namespace std;
int main()
{   int a,b,c,d,e,x,i,j=0,k,t=0,z=0;
    cout<<"������һ����x:";
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
       j=j++;                            //                 t4=1  i4=0    k4=0    z4=6   j4=4    ����1023Ϊ��λ��������λ��֮��Ϊ6 
    }while(i>0);
     cout<<"xΪ"<<j<<"λ��";
     cout<<'\n';
     
    cout<<"x�ĸ���λ��֮��Ϊ:"<<z;
 }
    else cout<<"x��������"; 
	return 0; 
}
