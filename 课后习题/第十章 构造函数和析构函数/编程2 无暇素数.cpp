#include<iostream>
using namespace std;
class NUM
{   private:
	  int a[20];      //整型数组，用来存储100以内的无暇素数
	  int count;     //记录找到的无暇素数的个数
	    public:
		  NUM();   //构造函数，将count初始化为0
		  int reverse(int n);    //求取并返回n的逆序数
		  int isPrime(int n);    //判断n是否为素数，若是则返回1，否则返回0
		  void fun();            //求100以内的所有无暇素数并存储在数组a中
		  void print();          //输出100以内的无暇素数个数和大小 
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
