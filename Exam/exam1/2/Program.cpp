/* 求满足条件n!<m的最大数n。
m为正整数，由in.txt读入, 
将结果n输出到out.txt文件中。
如:in.txt
30
则:out.txt
4 
注意：请勿删除注释语句。 
---------------------------------------------------------------------------------------------------*/

	/**********  Begin  **********/














	/**********   End  ***********/

#include<fstream>
#include<iostream>
using namespace std;
int main()
{   ifstream infile("in.txt");
    ofstream outfile;
    outfile.open("out.txt");
     int m,n,s=1,i,j;
	 infile>>m;
     for(n=10;n>1;n--)
     {   
         for(i=1;i<=n;i++)
        {  s=s*i;
        }  
            if(s<m) 
	        {  outfile<<n;
	           return 0;
		    }
		  s=1; 
     }
    infile.close();           
    outfile.close();

}
 
