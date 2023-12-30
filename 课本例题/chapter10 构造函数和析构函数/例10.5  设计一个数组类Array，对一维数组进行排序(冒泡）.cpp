#include<iostream>
using namespace std;
class Array      
{   int *p;             //数组指针 
    int n;             //数组个数
  public:
     Array(int a[],int m);   //构造函数
	 void Sort(void);         //排序
	 void Show(void);         //显示数组内容
	 ~Array();                //析构函数 
} ;
  Array::Array(int a[],int m)  //构造函数
  {  n=m;                      //用m初始化元素个数n
     p=new int[n];             //为指针p分配动态存储空间
	 for(int i=0;i<n;i++)
	  *(p+i)=a[i];             //将数组元素的值赋给数组指针存储 
  } 
  
  void Array::Sort()           //选择法由小到大排序 
  {  int i,j,t;
      for(i=0;i<n-1;i++)
       {     for(j=0;j<n-i-1;j++)
               {  if(p[j]>=p[j+1])
                  {t=p[j];
                   p[j]=p[j+1];
				   p[j+1]=t;
			      }
               }
              
       }
  }
  
  void Array::Show()               //输出数组元素 
  {   for(int i=0;i<n;i++)
        cout<<p[i]<<'\t';
        cout<<endl;
  }
  
  Array::~Array()                  //析构函数，释放new开辟的存储空间
  { if(p)  delete []p;}
  
int main()
{   int a[]={4,6,2,7,1,8};
    Array arr(a,sizeof(a)/sizeof(a[0]));   //用数组a创建数组类对象
	cout<<"原数组为:"<<'\n';
	arr.Show();
	arr.Sort();
	cout<<"排序后的数组为:"<<'\n';
	arr.Show();
	return 0; 
}
  
   
