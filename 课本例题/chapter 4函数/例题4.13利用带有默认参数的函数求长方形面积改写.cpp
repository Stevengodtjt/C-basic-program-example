#include<iostream>
using namespace std;
int main()
{ int a=8,b=6;
  int area(int=4, int=2);   //����ԭ����������������ʡ���������Ĭ��ֵ
  cout<<area(a,b)<<endl;
  cout<<area(a)<<endl;
  cout<<area()<<endl;
  return 0; 
}
int area(int length ,int width)  //�������壬�����ٸ���Ĭ��ֵ 
{  return length*width;
}
