#include<iostream>
#include<cmath>
using namespace std;
class  Tri             //��������Tri
{private:
	double  a,b,c ;    //����˽�г�Ա���ݣ���ʾ�����ε�����
 public:
	void Setabc(double , double , double );	// �������������ߵı߳��ĺ�������
	double Peri(void);                      //�������ε��ܳ��ĺ�������
	double Area(void);                     //�������ε�����ĺ�������
}; 
void Tri::Setabc(double x, double y, double z)	//�������������ߵı߳�
{a=x;b=y;c=z;	}  
double Tri::Peri(void)                      //�������ε��ܳ����ܳ���Ϊ����ֵ����
{	return a+b+c;	}
double Tri::Area(void)                     //�������ε�����������Ϊ����ֵ����
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}		

int main()
{  Tri  tria, *p;                 //����һ�������Tri��Ķ���tria��Tri���ָ�����p
    p=&tria;                                 //ָ�����ָ��tria
    p->Setabc(3, 4, 5);     //����ָ��������������ζ���tria�����߱߳�
    cout<<"tria���ܳ�Ϊ: "<<p->Peri()<<endl; 
    cout<<"tria�����Ϊ: "<<p->Area()<<endl;
    return 0;
}

