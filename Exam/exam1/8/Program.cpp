/*
��д����fun�����ַ����еĴ�д��ĸת��Ϊ��Ӧ��Сд��ĸ�������ַ����䡣
���磬���룺
   HELLO world!
�����
   hello world!
ע�⣺����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д���������
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
  cout<<"�������ַ���\n";
  cin.getline(str,40);
  fun(str);
  cout<<"��д��ĸת����Сд��ĸ�Ľ����\n"<<str;
  xxx();
  return 0;
}

void xxx()
{
  /* ���������ڴ��ļ�������������ݣ�����fun������������ݣ��ر��ļ���*/
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
