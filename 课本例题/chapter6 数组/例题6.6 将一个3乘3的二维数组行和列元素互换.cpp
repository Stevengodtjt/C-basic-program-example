#include<iostream>
using namespace std;
int main()
{  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int b[3][3],i,j;
   cout<<"����a:\n";
   for(i=0;i<3;i++)
   {  for(j=0;j<3;j++)
       {  cout<<a[i][j]<<'\t';
       } 
	   cout<<'\n';
   } 
   for(i=0;i<3;i++)
   {   for(j=0;j<3;j++)
        { b[j][i]=a[i][j];         //��a�����i��j�� ����b�����j��i�� 
        }
   }
   cout<<"����b:\n";
   for(i=0;i<3;i++)
   {   for(j=0;j<3;j++)
        {  cout<<b[i][j]<<'\t';
        }
        cout<<'\n';
   } 
   return 0;
}
