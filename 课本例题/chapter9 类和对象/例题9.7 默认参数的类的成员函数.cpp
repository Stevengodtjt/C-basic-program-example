#include<iostream>
#include<cmath>
using namespace std;
class  Tri  				   //��������Tri
{
	private:
		double  a,b,c ;  	  //����˽�г�Ա���ݣ���ʾ�����ε�����
	public:
		void Setabc(double=5);	         //A�������ȱ߽������߳��ĺ���������Ĭ�ϲ���ֵֻ�ܳ���һ�� 
		double Peri(void); 				//�������ε��ܳ��ĺ�������
		double Area(void); 				//�������ε�����ĺ�������
}; 
void Tri::Setabc(double x)             //B���õȱ������α߳��������ٳ���Ĭ�ϲ���ֵ 
 {	a=b=c=x;	}  
double Tri::Peri(void) 					//�������ε��ܳ����ܳ���Ϊ����ֵ����
{	return a+b+c;	}
double Tri::Area(void) 					//�������ε�����������Ϊ����ֵ����
{	double  t=(a+b+c)/2;
	double  s;
	s=sqrt(t*(t-a)*(t-b)*(t-c));
	return s;
}			

int main()
{	Tri  tria, trib; 			 //�������������Tri��Ķ���
	tria.Setabc(); 		        //C����Ĭ�ϵĲ���ֵ5���������ζ���tria�����߱߳�
	trib.Setabc(4);		        //D����ʵ�ʲ���ֵ4���������ζ���trib�����߱߳�
    cout<<"tria���ܳ�Ϊ:"<<tria.Peri()<<'\t'<<"���Ϊ:"<<tria.Area()<<endl; 
    cout<<"trib���ܳ�Ϊ:"<<trib.Peri()<<'\t'<<"���Ϊ:"<<trib.Area()<<endl; 
	return 0;
}

