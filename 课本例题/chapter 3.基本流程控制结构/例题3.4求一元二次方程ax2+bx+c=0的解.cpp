#include<iostream>
#include<cmath>
using namespace std;
int main()
{  float a,b,c,delta;
   cout<<"��������ϵ��:";
   cin>>a>>b>>c; 
   cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"c="<<c<<'\n';
   delta=b*b-4*a*c;
   if(delta<0)
   {cout<<"������ʵ��"<<'\n' ;
   }
   else{
   	   delta=sqrt(delta);
   	   if(delta>0)
   	   {  cout<<"��������������ʵ��"<<'\n';
		  cout<<"x1="<<(-b+delta)/2/a<<'\n';
		  cout<<"x2="<<(-b-delta)/2/a<<'\n'; 
   	   }
   else{
   	   cout<<"������������ȵ�ʵ��"<<'\n';
       cout<<"x1=x2="<<-b/2/a<<endl;	 
   }
   } 
   return 0;
}
