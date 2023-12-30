#include<iostream>
#include<cmath>
using namespace std;
float f1(float x)
{return x*x*x+x*x-3*x+1;}          //f(1)x
float f2(float x)
{return x*x-2*x-8;}               //f(2)x
float f3(float x)
{return x*x*x+2*x*x+2*x+1;}        //f(3)x

float divide(float(*p)(float),float x1,float x2)  //二分法计算方程的解
{  float x0;
   do
   {  x0=(x1+x2)/2;
      if(p(x1)*p(x0)>0)     //若p(x1)*p(x0)>0说明解在x2与x0之间 
        x1=x0;
        else                //若p(x1)*p(x0)<0说明解在x1与x0之间 
        x2=x0;
   }while(fabs(p(x0))>1e-6);
   return x0;
} 
int main()
{   cout<<"f1方程的解为:"<<divide(f1,-2,2)<<endl;
    cout<<"f2方程的解为:"<<divide(f2,-3,3)<<endl;
	cout<<"f3方程的解为:"<<divide(f3,-2,3)<<endl;
	return 0; 
}
