/* 
��д����fun����������ǣ�Ҫ��8�У����������������£�
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
.....
ע�⣺����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������� 
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
  for(i=0;i<8;i++)//����������
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
  /* ���������ڴ��ļ�������������ݣ�����fun������������ݣ��ر��ļ���*/
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
