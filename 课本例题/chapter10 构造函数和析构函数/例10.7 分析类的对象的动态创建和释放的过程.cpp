#include<iostream>
using namespace std;
class Tri     //����
{  private:
	  double a,b,c;        //����˽�г�Ա����,��ʾ����������
	   public:
	    Tri(double x,double y,double z)   //���캯��
		{  a=x; b=y; c=z;
		   cout<<"�߳���"<<a<<'\t'<<b<<'\t'<<c<<"�������ε��ù��캯��"<<endl; 
		} 
		Tri()                            //�����޲εĹ��캯��
		{  a=b=c=0;
		   cout<<"�߳���"<<a<<'\t'<<b<<'\t'<<c<<"�������ε��ù��캯��"<<endl; 
		} 
		~Tri()                             //�������� 
		{  cout<<"�߳���"<<a<<'\t'<<b<<'\t'<<c<<"�������ε�����������"<<endl; }
} ;
int main()
{   Tri *p1,*p2;         //���������ָ��
    p1=new Tri(3,4,5);    //���ô������Ĺ��캯������̬����һ����������Ķ���
	p2=new Tri();         //�����޲����Ĺ��캯������̬����һ����������Ķ���
	delete p1;            //�ͷŴ����ĵ�һ������
	delete p2;            //�ͷŴ����ĵڶ�������
	cout<<"����main()����"<<endl;
	return 0; 
}
