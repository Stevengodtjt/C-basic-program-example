#include<iostream>
using namespace std;
class ARRAY
{  private:
	  int a[100];         //����������� 
	  int n;              //������Ԫ�صĸ���
	   public:
	     ARRAY(int t[],int m);    //���캯�������ò���t��ʼ����Աa������mΪ����t��Ԫ�صĸ������ò���m��ʼ��n
		 int sum(int x);          //������x�ĸ�λ����֮�ͣ������ظ�ֵ���˺�������Ա����fun�������� 
		 void fun();              //��Ҫ�������a��Ԫ������
		 void print();            //�������a�е�����Ԫ�� 
};
  ARRAY::ARRAY(int t[],int m)
  {  n=m;
     for(int i=0;i<n;i++)
	    a[i]=t[i]; 
  }
  int ARRAY::sum(int x)
  {    int i=0,z=0;         //i���ڱ�ʾλ��,z�������λ����֮�� 
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
   cout<<"����ǰ������Ϊ:"; 
    arr.print();
    cout<<endl;
    arr.fun();
   cout<<"����������Ϊ:"; 
   arr.print();
   return 0;
}
  
  
  
  
  
  
  
  
  
  
  
