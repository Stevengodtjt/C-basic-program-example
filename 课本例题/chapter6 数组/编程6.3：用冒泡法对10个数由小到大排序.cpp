#include<iostream>
using namespace std;
int main()
{ int a[10];
  int i,j,t;
  cout<<"Input 10 number:\n";
  for(i=0;i<10;i++)
  { cin>>a[i];            //输入数组 
  }
  for(i=0;i<=10-2;i++)
  {   for(j=0;j<=10-i-2;j++)
       { if(a[j]>a[j+1])
	     {  t=a[j];              //交换两个数 
		    a[j]=a[j+1];
	        a[j+1]=t;
	     } 
       }
  }
  for(i=0;i<10;i++)
  { cout<<a[i]<<'\t';
  }
  return 0;
}
