#include<iostream>
using namespace std;
int main() 
{ int a[8][8]={{1}};      //先给第一个元素赋值为1,其他元素均为0 
  int b,c,d,i,j,k,z;        
  for(b=0;b<8;b++)        
  a[b][0]=1;           //第一列的元素全部赋值为1 
  
  for(c=0,d=0;c<8;c++,d++)
  a[c][d]=1;           //行数等于列数的元素全部赋值为1 
  
  {for(i=2;i<8;i++)    //从第二行开始 
     {for(j=1;j<i+1;j++)  //列数大于行数时才需要利用下列公式给矩阵元素赋值 
       a[i][j]=a[i-1][j-1]+a[i-1][j];   //eg.a[2][1]=a[1][0]+a[1][1] 
     } 
  } 
   for(k=0;k<8;k++)
   {   for(z=0;z<=k;z++)    //当列数<行数时才输出矩阵 
       cout<<a[k][z]<<'\t';
       cout<<'\n';
   }
  return 0;
}
