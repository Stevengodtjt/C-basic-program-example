#include<iostream>
using namespace std;
int main()
{ int a=2,b=4;
  int *p1,*p2;     //������������ָ�����������"*"������˵����
  p1=&a;           //�ѱ���a�ĵ�ַ����p1
  p2=&b;           //�ѱ���b�ĵ�ַ����p2
  cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
  cout<<"*p1="<<*p1<<'\t'<<"p2="<<*p2<<endl;    //���p1��p2��ָ����ڴ����ݣ�"*"��ʾ"ָ��"
  return 0;
} 
