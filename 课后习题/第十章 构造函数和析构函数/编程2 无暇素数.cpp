#include<iostream>
using namespace std;
class NUM
{   private:
	  int a[20];      //�������飬�����洢100���ڵ���Ͼ����
	  int count;     //��¼�ҵ�����Ͼ�����ĸ���
	    public:
		  NUM();   //���캯������count��ʼ��Ϊ0
		  int reverse(int n);    //��ȡ������n��������
		  int isPrime(int n);    //�ж�n�Ƿ�Ϊ�����������򷵻�1�����򷵻�0
		  void fun();            //��100���ڵ�������Ͼ�������洢������a��
		  void print();          //���100���ڵ���Ͼ���������ʹ�С 
} ;
   NUM::NUM()
   { 
     count=0;
   }
   int NUM::reverse(int n)
   {  int m=0;
       while(n>0)
       { m=m*10+n%10;
         n=n/10;
       }
       return m;
   }
   int NUM::isPrime(int n)
   {   int prime;
       prime=1;
       for(int i=2;i<n;i++)
          {   if(n%i==0)
               prime=0;
          }
          return prime;
   }
   void NUM::fun()
   {  
        int i=0; 
           for(int j=10;j<100;j++)
            {   if(isPrime(j)==1&&isPrime(reverse(j))==1)
                {a[i]=j;
                 count=count+1;
				 i++;
                }
                
            }
       
   }
   void NUM::print()
   {    cout<<"count="<<count<<endl;
       for(int i=0;i<count;i++)
         {   cout<<a[i]<<'\t';
             
         }
   }
int main()
{   NUM num;
    NUM();
    num.fun();
    num.print();
    return 0;
}
