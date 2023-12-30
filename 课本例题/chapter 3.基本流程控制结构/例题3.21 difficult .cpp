#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{    int i,a,b,sum=0;                            //自动出题（加减乘），由随机数决定，两个操作数取值范围为0~9；共出10题；每题10分；最后给出总分
     int op,c,d;
     srand(time(NULL));
     for(i=1;i<=10;i++)
     {  a=rand()%10;
        b=rand()%10;
        op=rand()%3;      //共有三种运算，分别用0,1,2表示
		
		switch(op)
		{case 0:cout<<a<<'+'<<b<<'=';   
		         c=a+b; break;
		case 1:cout<<a<<'-'<<b<<'=';
		         c=a-b; break;
		case 2:cout<<a<<'*'<<b<<'=';
		         c=a*b; 
		}
		cin>>d;             //接收用户从键盘上输入答案
		    if(d==c)
		      { cout<<"正确！"<<'\n';
			    sum=sum+10; 
		      }
		        else cout<<"错误"<<'\n'; 
     }
     cout<<"10题中答对:"<<sum/10<<"题,"<<'\t'<<"得分:"<<sum<<endl;
	 return 0; 
}
