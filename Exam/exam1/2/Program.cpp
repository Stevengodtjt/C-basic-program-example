/* ����������n!<m�������n��
mΪ����������in.txt����, 
�����n�����out.txt�ļ��С�
��:in.txt
30
��:out.txt
4 
ע�⣺����ɾ��ע����䡣 
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
 
