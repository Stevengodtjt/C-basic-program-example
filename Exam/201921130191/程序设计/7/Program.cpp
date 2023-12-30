/*
编写函数fun:实现字符串的复制，即将str1中的字符串复制到str2中。（不允许用字符串库函数strcpy）。
注意：请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句
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
  cout<<"请输入要复制的字符串：\n";
  cin.getline(c1,40);
  fun(c1,c2);
  cout<<"复制的结果："<<c2;
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
