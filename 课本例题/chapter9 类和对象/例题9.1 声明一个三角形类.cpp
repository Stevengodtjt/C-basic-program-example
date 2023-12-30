class  Tri  //自定义的类名Tri
{  private:
      double  a,b,c ;  //三个私有成员数据，表示三角形的三边
   public:
      void Setabc(double x, double y, double z) //公有函数，设置三角形三边的边长
      {	a=x;	b=y;	c=z;	}  
    double Peri(void) //公有函数，求三角形的周长，周长作为函数值返回
    {   return a+b+c;	}
    double Area(void) //公有函数, 求三角形的面积，面积作为函数值返回
    {   double  t=(a+b+c)/2;
        double  s;
        s=sqrt(t*(t-a)*(t-b)*(t-c));
        return s;
     }
};

