class  Tri  //�Զ��������Tri
{ private:
     double  a,b,c ;  //����˽�г�Ա���ݣ���ʾ�����ε�����
  public:
     void Setabc(double , double , double );     // �������������ߵı߳��ĺ�������
     double Peri(void);                          //�������ε��ܳ��ĺ�������
     double Area(void);                         //�������ε�����ĺ�������
};                                               //�����������
void Tri::Setabc(double x, double y, double z)     //���ڳ�Ա�������������������ߵı߳�
{    a=x;   b=y;	c=z;	}  
double Tri::Peri(void)                            //���ڳ�Ա�������������ε��ܳ����ܳ���Ϊ����ֵ����
{  return a+b+c;	}
double Tri::Area(void)                            //���ڳ�Ա�������������ε�����������Ϊ����ֵ����
{   double  t=(a+b+c)/2;
    double  s;
    s=sqrt(t*(t-a)*(t-b)*(t-c));
    return s;
}

