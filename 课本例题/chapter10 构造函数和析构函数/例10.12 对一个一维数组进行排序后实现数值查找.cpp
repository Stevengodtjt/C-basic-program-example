#include<iostream>
using namespace std;
class Array
{   int a[100];           //待处理数组 
    int m;                //m为成员数组a中元素的个数
	   public:
	     Array(int t[],int n);   //构造函数，用t初始化a，n初始化m
		 void sort();            //a中元素从小到大排序
		 int find(int x);        //a中查找数值x
		 void print();           //输出a 
} ;
Array::Array(int t[],int n)
{   m=n;
     for(int i=0;i<m;i++)
       a[i]=t[i];
} 
void Array::sort()
{  int i=0,j=0,min,t;
    for(i=0;i<m-1;i++)
    {   min=i;
          for(j=i+1;j<m;j++)
          {   if(a[min]>=a[j])
                min=j;
          }
          t=a[i];
          a[i]=a[min];
          a[min]=t;
    }
}
int Array::find(int x)
{   for(int i=0;i<m;i++)
     {  if(x==a[i])
         return i;    
     }
	 return -1;
}
void Array::print()
{   for(int i=0;i<m;i++)
      cout<<a[i]<<'\t';
}
int main()
{   int a[]={2,14,6,18,10,7,9,2,2,35},x;
    Array arr(a,sizeof(a)/sizeof(a[0]));
    cout<<"排序后的数组为:";
	arr.sort();
	arr.print();
	cout<<endl;
    cout<<"请输入要查找的数:";
	cin>>x;
	x=arr.find(x);
	if(x!=-1)
	cout<<"查找成功，匹配元素的下标为:"<<x<<endl ;
	else cout<<"查找不成功";
	return 0; 
}



