#include<iostream>
using namespace std;
class Arr
{  int a[10],len;
   public:
   	void SetArr(int *p,int n=10)
   	{  len=n;
   	   for(int i=0;i<len;i++)
   	     a[i]=p[i];
   	}
   	int MaxArr()
   	{  int max=a[0];
   	   for(int i=1;i<len;i++)
   	    if(max<a[i])
   	      max=a[i];
   	      return max;
   	}
   	
   	int MaxArr(int n)
   	{  int max=a[0];
   	   for(int i=1;i<n;i++)
   	     if(max<a[i])
   	       max=a[i];
   	    return max;
   	}
   	int MaxArr(unsigned n)
   	{ return a[n];}
};
int main()
{  int a1[10]={6,8,10,4,2,7,5,9,17,3};
   int a2[5]={10,4,2,7,15};
   Arr arr1,arr2;
   arr1.SetArr(a1);
   arr2.SetArr(a2,sizeof(a2)/sizeof(int));
   cout<<arr1.MaxArr()<<endl;
   cout<<arr2.MaxArr(3)<<endl;
   cout<<arr2.MaxArr(3u)<<endl;
   return 0;
}
