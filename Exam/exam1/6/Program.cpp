/*
��д����funʵ�־���3��3�У���ת�ã������л�����   
���磺��������ľ��� 
       100 200 300     
       400 500 600     
       700 800 900 
ת�ý����   
      100 400 700     
      200 500 800
      300 600 900     
ע�⣺����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д���������
---------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;          
void  fun(int array[3][3])    
{
  /**********Begin**********/   
      
  
  
  /**********  End  **********/
}     
int main()     
{   
  void  xxx();   
  int i,j;     
  int array[3][3]={{100,200,300},{400,500,600},{700,800,900}};     
  for (i=0; i < 3; i++)     
  {
    for (j=0; j < 3; j++)     
      cout<<array[i][j]<<' ';     
    cout<<'\n';     
  }     
  fun(array);     
  cout<<"Converted array:"<<endl;     
  for(i=0;i<3;i++)     
  { 
    for(j=0;j<3;j++)     
      cout<<array[i][j]<<' ';     
    cout<<'\n';
  }
  xxx();
  return 0;     
} 
    
void xxx()     
{       
  ifstream IN("in.txt",ios::in);
  ofstream OUT;
  OUT.open("out.txt",ios::out);
  int i,j, array[3][3]; 
  for (i=0; i < 3; i++)     
    for (j=0; j < 3; j++)     
      IN>>array[i][j];     
    fun(array);     
    for (i=0; i < 3; i++)     
    { 
      for (j=0; j < 3; j++)     
        OUT<<array[i][j]<<' ';     
      OUT<<'\n';     
    }     
  IN.close();
  OUT.close();    
}