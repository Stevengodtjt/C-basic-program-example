#include<iostream>
using namespace std;
const int N=3;
void fun(int a[][N],int b[])
{  int i,j;
   for(i=0;i<N;i++)
   {   b[i]=a[i][0];
       for(j=1;j<N;j++)
         if(b[i]<a[i][j])  b[i]=a[i][j];
   }
}
int main()
{   int x[N][N]={1,2,3,4,5,6,7,8,9},y[N],i;
    fun(x,y);
    for(i=0;i<N;i++)  cout<<y[i]<<",";
    cout<<endl;
    return 0;
} 
