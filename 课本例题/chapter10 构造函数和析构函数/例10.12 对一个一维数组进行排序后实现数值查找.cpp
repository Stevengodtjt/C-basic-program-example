#include<iostream>
using namespace std;
class Array
{   int a[100];           //���������� 
    int m;                //mΪ��Ա����a��Ԫ�صĸ���
	   public:
	     Array(int t[],int n);   //���캯������t��ʼ��a��n��ʼ��m
		 void sort();            //a��Ԫ�ش�С��������
		 int find(int x);        //a�в�����ֵx
		 void print();           //���a 
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
    cout<<"����������Ϊ:";
	arr.sort();
	arr.print();
	cout<<endl;
    cout<<"������Ҫ���ҵ���:";
	cin>>x;
	x=arr.find(x);
	if(x!=-1)
	cout<<"���ҳɹ���ƥ��Ԫ�ص��±�Ϊ:"<<x<<endl ;
	else cout<<"���Ҳ��ɹ�";
	return 0; 
}



