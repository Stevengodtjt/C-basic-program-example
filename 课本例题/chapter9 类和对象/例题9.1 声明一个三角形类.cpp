class  Tri  //�Զ��������Tri
{  private:
      double  a,b,c ;  //����˽�г�Ա���ݣ���ʾ�����ε�����
   public:
      void Setabc(double x, double y, double z) //���к������������������ߵı߳�
      {	a=x;	b=y;	c=z;	}  
    double Peri(void) //���к������������ε��ܳ����ܳ���Ϊ����ֵ����
    {   return a+b+c;	}
    double Area(void) //���к���, �������ε�����������Ϊ����ֵ����
    {   double  t=(a+b+c)/2;
        double  s;
        s=sqrt(t*(t-a)*(t-b)*(t-c));
        return s;
     }
};

