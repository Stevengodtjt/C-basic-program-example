#include<iostream>
#include<cmath>
using namespace std;
class  Tri  //��������Tri
{private:
	double  a,b,c ;  //����˽�г�Ա���ݣ���ʾ�����ε�����
 public:
	void Setabc(double , double , double );	// �������������ߵı߳��ĺ�������
	double Peri(void);                      //�������ε��ܳ��ĺ�������
	double Area(void);                     //�������ε�����ĺ�������
}; 
void Tri::Setabc(double x, double y, double z)	//�������������ߵı߳�
{a=x;b=y;c=z;	}  
double Tri::Peri(void)                        //�������ε��ܳ����ܳ���Ϊ����ֵ����
{	return a+b+c;	}
double Tri::Area(void)                       //�������ε�����������Ϊ����ֵ����
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}		


int main()
{ Tri  tria; 	       //������Ķ���tria
  Tri  &t=tria;        //A �������tria�����ñ�����t�Ƕ���tria����һ������
   t.Setabc(3, 4, 5);	//�������ñ������������ζ���tria�����߱߳�
   cout<<"tria���ܳ�Ϊ: "<<t.Peri()<<'\t'<<"���Ϊ: "<<t.Area()<<endl;
   return 0;
}

