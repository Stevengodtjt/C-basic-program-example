#include<iostream>
using namespace std;
int gys(int m,int n)      //求两个数的最大公约数，形参是变量
{  int r,t;
   if(m<n)               //算法要求m>n 
   { t=m;
     m=n;
     n=t;
   }
    do
   {  r=m%n;
      m=n;
      n=r;
   } while(r>0);
   return m;
} 
int main()
{ int a[8]={26,1007,956,705,574,371,416,517};
  int b[8]={994,631,772,201,262,763,1000,781};
  int c[8],i;
  for(i=0;i<8;i++)
  { c[i]=gys(a[i],b[i]); }  //对应元素的公约数，实参是数组元素
  for(i=0;i<8;i++)
  cout<<c[i]<<'\t';
  cout<<endl;
  return 0; 
}
