#include<iostream> 
using namespace std;
#define PI 3.14159    //用PI表示常量3.1415926
int main() 
{     double  s;                    //定义变量s，代表圆的面积 
      const double radious=2.5;     //定义常量radious，其固定值为2.5
	  s=PI*radious*radious;          //计算圆的面积
	  cout<<"圆的面积="<<s<<endl;   //输出结果
	  return 0;  
}
