#include<iostream>
using namespace std;
int main()
{  int i,k,x[10]={1,2,3,4,5,6,7,8,9,10},y[3]={0};
   for(i=0;i<10;i++)
   {  k=x[i]%3;
      y[k]=y[k]+x[i];
   } 
   cout<<y[0]<<'\t'<<y[1]<<'\t'<<y[2]<<endl;
   return 0;
} 
