#include<iostream>
using namespace std;
int main()
{   int a,b,c,x,y;
    cout<<"��������������:";
	cin>>a>>b>>c;
	for(x=a;x<a*b*c;x++)       //x��С������һ����
	{  if(x%a==0&&x%b==0&&x%c==0)     //��������ѡ������ 
	     break;
	}
	for(y=a;y>0;y--)
	{  if(a%y==0&&b%y==0&&c%y==0)
	    break;
	}
	cout<<a<<","<<b<<","<<c<<"����С������:"<<x<<endl;
	cout<<a<<","<<b<<","<<c<<"�����Լ��:"<<y<<endl; 
	return 0; 
}
