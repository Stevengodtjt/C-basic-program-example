/* 
编写函数fun生成杨辉三角（要求8行）。杨辉三角组成如下：
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
.....
注意：请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句 
---------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void fun(int a[8][8])
{
  /**********Begin**********/
  int i,j;
  for(i=0;i<8;i++)
  for(j=0;j<=i;j++)
  if(j==0||i==j)
  {a[i][j]=1;
  }
  else {a[i][j]=a[i-1][j-1]+a[i-1][j];
  
  }
   

  
  /**********  End  **********/
}


int main()
{
  void xxx();
  int i,j;
  int a[8][8]={0};
  fun(a);
  for(i=0;i<8;i++)//输出杨辉三角
  {
  	for(j=0;j<=i;j++)
  	{
  	 cout<<a[i][j]<<' ';
	} 
	cout<<endl;
  }
  xxx();
  return 0;
}

void xxx()
{
  /* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
     ofstream outf;
     outf.open("out.txt",ios::out);
     int b[8][8]={0},i,j;
     fun(b);
     for(i=0;i<8;i++)
     {
     	for(j=0;j<=i;j++)
       	{
       	   outf<<b[i][j]<<' ';	
       	}
       	outf<<endl;
     }    	
  	     
     outf.close();
}
