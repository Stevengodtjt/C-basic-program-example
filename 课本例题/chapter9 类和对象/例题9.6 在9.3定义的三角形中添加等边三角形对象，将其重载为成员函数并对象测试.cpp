#include<iostream>
#include<cmath>
using namespace std;
class  Tri  //��������Tri
{
	private:
	   double  a,b,c ;  		//����˽�г�Ա���ݣ���ʾ�����ε�����
	public:
	  void Setabc(double, double, double);       //  ���س�Ա�������������߱߳�
	  void Setabc(double);                      //  ���س�Ա���������õȱ������εı߳�
       double Peri(void); 		                //�������ε��ܳ��ĺ�������
	  double Area(void); 		               //�������ε�����ĺ�������
}; 

void Tri::Setabc(double x, double y, double z)	//�������������ߵı߳�
{a=x;b=y;c=z;	} 
void Tri::Setabc(double x)	                   //B���õȱ������α߳��������ٳ���Ĭ�ϲ���ֵ
{	a=b=c=x;	}
double Tri::Peri(void)                        //�������ε��ܳ����ܳ���Ϊ����ֵ����
{	return a+b+c;	}
double Tri::Area(void)                       //�������ε�����������Ϊ����ֵ����
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}

int main()
{	Tri  tria,trib; 	  //������Ķ���tria��trib
	tria.Setabc(3,4,5);	  //C ����Ĭ�ϵĲ���ֵ5���õȱ������εı߳�
	trib.Setabc(5);	      //D ����ʵ�ʵĲ���ֵ4���õȱ������εı߳�
	cout<<"tria���ܳ�Ϊ: "<<tria.Peri()<<'\t'<<"���Ϊ: "<<tria.Area()<<endl;
	cout<<"trib���ܳ�Ϊ: "<<trib.Peri()<<'\t'<<"���Ϊ: "<<trib.Area()<<endl;
	return 0;
}

