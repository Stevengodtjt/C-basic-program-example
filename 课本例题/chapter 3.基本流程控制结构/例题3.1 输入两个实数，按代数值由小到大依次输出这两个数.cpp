#include<iostream>
using namespace std;
int main()
{   float a,b,t;                    //�������
    cout<<"����������ʵ����\n";      //����Ļ�������ʾ��Ϣ
	cin>>a>>b;                       //��������ֵ
	if(a>b)                          //���ǰһ���������ں�һ������
	{    t=a;a=b;b=t;   }            //���õ�����������������
	cout<<a<<'\t'<<b<<endl;          //�����������
	return 0; 
}
