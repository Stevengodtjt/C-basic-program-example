#include<iostream>
#include<cmath>
using namespace std;
class  Tri  				//��������Tri
{
	private:
		double  a,b,c ;  	//����˽�г�Ա���ݣ���ʾ�����ε�����
	public:
		void Setabc(double , double , double );	//�������������ߵı߳��ĺ�������
		double Peri(void); 				       //�������ε��ܳ��ĺ�������
		double Area(void); 				       //�������ε�����ĺ�������
		void Show(void);				      //��������ζ���Ĳ����ĺ�������
}; 
void Tri::Setabc(double x, double y, double z)
 {	a=x;		b=y;		c=z;	}  
double Tri::Peri(void) 					//�������ε��ܳ����ܳ���Ϊ����ֵ����
{	return a+b+c;	}
double Tri::Area(void) 					//�������ε�����������Ϊ����ֵ����
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}			
void Tri::Show(void)			       //��������ζ�������Ĺ��г�Ա����
{	cout<<"�����ε����߳��ֱ�Ϊ:"<<a<<'\t'<<b<<'\t'<<c<<'\t';
	cout<<"�ܳ�Ϊ:"<<Peri()<<'\t'<<"���Ϊ:"<<Area()<<endl; 	//���ó�Ա����Peri()��Area()
}

int main()
{	Tri  tria, trib; 			//�������������Tri��Ķ���
	tria.Setabc(3, 4, 5); 		//���������ζ���tria�����߱߳�
	trib.Setabc(5, 5, 5);		//���������ζ���trib�����߱߳�
	cout<<"������tria�Ĳ�����:\n";
	tria.Show();			//���ó�Ա���������tria�Ĳ���
	cout<<"������trib�Ĳ�����:\n";
	trib.Show();			//���ó�Ա���������trib�Ĳ���
	return 0;
}

