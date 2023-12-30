#include<iostream>
using namespace std;
int main()
{  int a[9]={1,2,3,4,5,6,7,8,9};
   int *b[]={&a[0],&a[3],&a[6]};
   int **p=b;
   for(int i=0;i<3;i++)
   cout<<p[i][i]<<'\t';  //p[1][1]=*(p[1]+1)=*(*(p+1)+1)=*(b[1]+1)=*(a[3]+1)=a[4] 
   return 0;
} 
