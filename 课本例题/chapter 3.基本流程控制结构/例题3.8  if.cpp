#include<iostream>
using namespace std;
int main()
{    float data1,data2;
     char op;
     cout<<"�������ݣ���ʽΪ:������1  �����  ������2 \n"; 
     cin>>data1>>op>>data2;
     if(op=='+') {cout<<data1<<op<<data2<<"="<<data1+data2<<'\n';}
     if(op=='-') {cout<<data1<<op<<data2<<"="<<data1+data2<<'\n';}
     if(op=='*') {cout<<data1<<op<<data2<<"="<<data1*data2<<'\n';}
     if(op=='/') 
         if(data2)
	      {cout<<data1<<op<<data2<<"="<<data1/data2<<'\n';} 
	     else cout<<"����Ϊ0!\n";
	     else cout<<op<<"��һ����Ч�����!\n"; 
		 return 0; 
	     
     
}
