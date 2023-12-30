#include<iostream>
using namespace std;
int main()
{   int i,j,k;
    for(i=1;i<=3;i++)
     {  for(j=1;j<=i-1;j++)  //控制*前的空格数              1  2  3   4  5 
	    {cout<<' ';}                                //空格  0  1  2   1  0 
		  for(k=1;k<=7-2*i;k++)  //控制*的个数           *  5  3  1   3  5 
		   { cout<<'*';} 
		   cout<<'\n';
     }
         for(i=4;i<=5;i++)
       {  for(j=1;j<=5-i;j++)
            {cout<<' '; }
              for(k=1;k<=2*i-5;k++)
                {cout<<'*';}
                cout<<'\n'; 
         
       }
       return 0;
     
} 
