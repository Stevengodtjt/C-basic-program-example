#include<iostream>
using namespace std;
class ARR
{   private:
	  int n;           //数组实际元素个数
	  int a[100];      //存放原始数组及结果数组
	     public:
		   ARR(int x[],int size);   //构造函数，用size初始化n，用x初始化数组a
		   void delsame();          //完成数组a中相同元素的删除工作
		   void show();             //将结果数组以每行5个数的形式输出到屏幕上 
};
ARR::ARR(int x[],int size)
{    n=size;
     for(int i=0;i<n;i++)
       a[i]=x[i];
}
void ARR::delsame()
{  int i,j;
    for(i=0;i<n-1;i++)
    {  if(a[i]==a[i+1])
	    {  for(j=i;j<n-1;j++)
		    {a[j]=a[j+1];}
			 n--;
			 i--; 
		}
    }
}
void ARR::show()
{   int sum=0;
    for(int i=0;i<n;i++)
    {   cout<<a[i]<<'\t';
         sum++;
        if(sum%5==0)
        cout<<endl;
    }
}

int main()
{  int b[]={1,2,2,3,4,4,5,6,6,7,8,8,8,9,10,10}; 
   ARR arr(b,sizeof(b)/sizeof(b[0]));
   arr.delsame();
   arr.show();
   return 0;
}






