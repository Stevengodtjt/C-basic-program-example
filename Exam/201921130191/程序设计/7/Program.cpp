/*
��д����fun:ʵ���ַ����ĸ��ƣ�����str1�е��ַ������Ƶ�str2�С������������ַ����⺯��strcpy����
ע�⣺����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д���������
---------------------------------------------------------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;
void fun(char str1[],char str2[])
{
  /**********Begin**********/
 int i;
 for(i=0;str1[i]!='\0';i++)
 str2[i]=str1[i];
 str2[i]='\0';


  
  /**********  End  **********/
}
int main()
{
  void xxx();
  char c1[40],c2[40];
  cout<<"������Ҫ���Ƶ��ַ�����\n";
  cin.getline(c1,40);
  fun(c1,c2);
  cout<<"���ƵĽ����"<<c2;
  xxx();
 return 0;
}

void xxx()
{
     ifstream inf;
     ofstream outf;
     inf.open("in.txt",ios::in);
     outf.open("out.txt",ios::out);
     int i;
     char s1[40],s2[40];
     while(!inf.eof())
     {
     	inf.getline(s1,40);
	    fun(s1,s2);
        outf<<s2;	
     }    
     inf.close();
     outf.close();

}
