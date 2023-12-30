/*
编写函数fun：将字符串中的大写字母转换为对应的小写字母，其它字符不变。
例如，输入：
   HELLO world!
结果：
   hello world!
注意：请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句
---------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void fun(char str[])
{
  /**********Begin**********/
  
  

  /**********  End  **********/
}


int main()
{
  void xxx();
  char str[40];
  cout<<"请输入字符串\n";
  cin.getline(str,40);
  fun(str);
  cout<<"大写字母转换成小写字母的结果：\n"<<str;
  xxx();
  return 0;
}

void xxx()
{
  /* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
     ifstream inf;
     ofstream outf;
     inf.open("in.txt",ios::in);
     outf.open("out.txt",ios::out);
     char s1[40];
     inf.getline(s1,40);
     fun(s1);
     outf<<s1;
     inf.close();
     outf.close();
}
