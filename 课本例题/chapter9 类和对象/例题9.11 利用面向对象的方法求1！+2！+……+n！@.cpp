#include<iostream>
using namespace std;
class FAC           //��������1��+2��+������+n�� 
{ 
   int n;           //�׳˵�������� 
   public:
   	void Setn(int m);   // ��m����n 
   	double Fact(int x);  //��x���������Ϊ����ֵ����
	double Sum();         //����x����1��+2��+����+n���������Ϊ����ֵ���� 
};
void FAC::Setn(int m)
   {n=m;} 
double FAC::Fact(int x)
{  double f=1;
    for(int i=1;i<=x;i++)  f=f*i;   //�׳��㷨
	return f; 
}

double FAC::Sum()
{   double s=0;
    for(int i=1;i<=n;i++)
    s=s+Fact(i);                     //���ó�Ա����Fact��n��
	return s; 
}

int main()
{  FAC fac;
    int m;
    cout<<"������һ������:"; 
    cin>>m;
    fac.Setn(m);                     //Ϊ�׳˵�������ֵ 
    cout<<m<<"!="<<fac.Fact(m)<<endl;  //��m��
	cout<<"1��+2��+����"<<m<<"!="<<fac.Sum()<<endl;   //��1!+2!+����+m!
	return 0; 
}
