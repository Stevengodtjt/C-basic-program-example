#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{    int i,a,b,sum=0;                            //�Զ����⣨�Ӽ��ˣ��������������������������ȡֵ��ΧΪ0~9������10�⣻ÿ��10�֣��������ܷ�
     int op,c,d;
     srand(time(NULL));
     for(i=1;i<=10;i++)
     {  a=rand()%10;
        b=rand()%10;
        op=rand()%3;      //�����������㣬�ֱ���0,1,2��ʾ
		
		switch(op)
		{case 0:cout<<a<<'+'<<b<<'=';   
		         c=a+b; break;
		case 1:cout<<a<<'-'<<b<<'=';
		         c=a-b; break;
		case 2:cout<<a<<'*'<<b<<'=';
		         c=a*b; 
		}
		cin>>d;             //�����û��Ӽ����������
		    if(d==c)
		      { cout<<"��ȷ��"<<'\n';
			    sum=sum+10; 
		      }
		        else cout<<"����"<<'\n'; 
     }
     cout<<"10���д��:"<<sum/10<<"��,"<<'\t'<<"�÷�:"<<sum<<endl;
	 return 0; 
}
