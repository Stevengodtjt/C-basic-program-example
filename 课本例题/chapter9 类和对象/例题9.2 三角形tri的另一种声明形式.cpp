class  Tri  //自定义的类名Tri
{ private:
     double  a,b,c ;  //三个私有成员数据，表示三角形的三边
  public:
     void Setabc(double , double , double );     // 设置三角形三边的边长的函数声明
     double Peri(void);                          //求三角形的周长的函数声明
     double Area(void);                         //求三角形的面积的函数声明
};                                               //类的声明结束
void Tri::Setabc(double x, double y, double z)     //类内成员函数，设置三角形三边的边长
{    a=x;   b=y;	c=z;	}  
double Tri::Peri(void)                            //类内成员函数，求三角形的周长，周长作为函数值返回
{  return a+b+c;	}
double Tri::Area(void)                            //类内成员函数，求三角形的面积，面积作为函数值返回
{   double  t=(a+b+c)/2;
    double  s;
    s=sqrt(t*(t-a)*(t-b)*(t-c));
    return s;
}

