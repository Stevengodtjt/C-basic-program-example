#include<iostream>
#include<cmath>
using namespace std;
class  Tri                                      //��������Tri
{private:
	double  a,b,c ;                             //����˽�г�Ա���ݣ���ʾ�����ε�����
 public:
	void Setabc(double , double , double );  	// �������������ߵı߳��ĺ�������
	double Peri(void);                         //�������ε��ܳ��ĺ�������
	double Area(void);                         //�������ε�����ĺ�������
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
int main()                                 //��ʼ����ڣ�������ʵ�ʵ������ν��м���
{  Tri  tria, trib; 	
    tria.Setabc(3, 4, 5); 
    trib.Setabc(5, 5, 5); 
    cout<<"tria���ܳ�Ϊ: "<<tria.Peri()<<'\t'<<"���Ϊ: "<<tria.Area()<<endl;
    cout<<"trib���ܳ�Ϊ: "<<trib.Peri()<<'\t'<<"���Ϊ: "<<trib.Area()<<endl; 
	return 0;
}

