#include<iostream>
using namespace std;
int main()
{   int a[2][3],i,j,n=1;
    for(i=0;i<2;i++)
       for(j=0;j<3;j++)
         a[i][j]=n++;
    for(i=0;i<2;i++)
    {   for(j=0;j<3;j++)
          cout<<a[i][j]<<'\t';
          cout<<endl;
    }
    return 0;
} 

