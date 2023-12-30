#include<iostream>
using namespace std;
class ARRAY
{  private:
	  int a[100];         //待排序的数组 
	  int n;              //数组中元素的个数
	   public:
	     ARRAY(int t[],int m);    //构造函数，利用参数t初始化成员a，参数m为数组t中元素的个数，用参数m初始化n
		 int sum(int x);          //求整数x的各位数字之和，并返回该值，此函数供成员函数fun（）调用 
		 void fun();              //按要求对数组a的元素排序
		 void print();            //输出数组a中的所有元素 
};
  ARRAY::ARRAY(int t[],int m)
  {  n=m;
     for(int i=0;i<n;i++)
	    a[i]=t[i]; 
  }
  int ARRAY::sum(int x)
  {    int i=0,z=0;         //i用于表示位数,z用于求各位数字之和 
       int k=x;                           
       int t=x; 
    do
    {  t=k%10;
	   i=k/10;                          //eg:    x=1023     t1=3  i1=102  k1=102  z1=3   
       k=k/10;                           //                 t2=2  i2=10   k2=10   z2=5      
       z=z+t;                            //                 t3=0  i3=1    k3=1    z3=5      
                                         //                 t4=1  i4=0    k4=0    z4=6   
    }while(i>0);
    return z;
  }
  void ARRAY::fun()
  {   int t;
      int max;
       for(int i=0;i<n-1;i++)
         {    int min=i;
		       for(int j=i+1;j<n;j++)
		     {
		        if(sum(a[min])>=sum(a[j]))
                   min=j;
		     }
                   t=a[i];
				   a[i]=a[min];
                   a[min]=t;
         }
  }
  void ARRAY::print()
  {  for(int i=0;i<n;i++)
      cout<<a[i]<<'\t';
  }
int main()
{  int b[]={297,735,624,158,312,900}; 
   ARRAY arr(b,sizeof(b)/sizeof(b[0]));
   cout<<"排序前的数组为:"; 
    arr.print();
    cout<<endl;
    arr.fun();
   cout<<"排序后的数组为:"; 
   arr.print();
   return 0;
}
  
  
  
  
  
  
  
  
  
  
  
