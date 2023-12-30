#include<iostream>
using namespace std;
int main()
{ int a[4][4];
  int i,j,sum;
  for(i=0;i<=3;i++)
    {   for(j=0;j<=3;j++)
         { cin>>a[i][j];
         }
    }
    sum=a[0][0]+a[0][3]+a[1][1]+a[1][2]+a[2][1]+a[2][2]+a[3][0]+a[3][3];
    cout<<"4*4矩阵两对角线之和为:"<<sum;
	return 0; 

}
