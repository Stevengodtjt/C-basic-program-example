/*
��д����fun��ѡ���������д�С��������
ע�⣺����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д���������
---------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void fun(int a[],int n)
{
  /**********Begin**********/
  int i,j,min,t;
  for(i=0;i<n-1;i++)
  { min=i; 
     for(j=i+1;j<n;j++)
      if(a[min]>a[j])
        min=j;
      t=a[i];
      a[i]=a[min];
      a[min]=t;
  }
  
  
  /**********  End  **********/
}

int main()
{
  void  xxx(); 
  int a[10]={3,2,13,-1,3,7,10,5,6,11},i;
  cout<<"����ǰԭ����Ϊ��"<<endl;
  for(i=0;i<10;i++)
    cout<<a[i]<<" ";
  fun(a,10);
  cout<<endl<<"��С��������֮������Ϊ��"<<endl;
  for(i=0;i<10;i++)
    cout<<a[i]<<" ";
  xxx();
  return 0;
}

void xxx()
{
  ifstream IN("in.txt",ios::in);
  ofstream OUT;
  OUT.open("out.txt",ios::out);
  int iIN[10],i;
  for(i=0;i<10;i++)    
  {   
    IN>>iIN[i];
  }
  fun(iIN,10);
  for(i=0;i<10;i++)    
  {   
    OUT<<iIN[i]<<'\n';
  }
  IN.close();
  OUT.close();
}
