#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int i=1,sign=1;           //���÷��ű�־
    float s=0,t=1;            //�ۼӺ�Ϊ������
	while(fabs(t)>1e-6)       //t�ľ���ֵ����10�ĸ�6�η� 
	{  t=sign*1.0/i;          //ͨ��ı�ʾ
	   sign=-sign;            //����ȡ��
	   i=i+2;                 //��ĸ���е���
	   s=s+t;                 //�����ۼӺ� 
	} 
	cout<<"pi="<<4*s<<'\n';
	return 0;
}
