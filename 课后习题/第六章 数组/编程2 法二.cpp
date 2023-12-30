#include<iostream>
using namespace std;
int main() 
{ int a[8][8];
  int b,c,i,j,k,z; 
  for(b=0;b<8;b++)
  {   for(c=0;c<8;c++)
      { a[b][c]=1;
      }
  }
  
       
  {for(i=2;i<8;i++)    
     {for(j=1;j<i+1;j++)  
       a[i][j]=a[i-1][j-1]+a[i-1][j];  
     } 
  } 
   for(k=0;k<8;k++)
   {   for(z=0;z<=k;z++)    //当列数<=行数时才输出矩阵 
       cout<<a[k][z]<<'\t';
       cout<<'\n';
   }
  return 0;
}
