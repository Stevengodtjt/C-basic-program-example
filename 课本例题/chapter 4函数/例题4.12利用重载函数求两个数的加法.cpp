#include<iostream>
using namespace std;
int sum(int a,int b) //A
{ return a+b;}
double sum(double a,double b) //B
{ return a+b;} 
  int main()
{ cout << "3+5=" << sum(3,5)<<endl;         //ʵ��Ϊ����������A��sum����
 cout << "3.5+8.7=" << sum(3.5,8.7)<<endl; //ʵ��Ϊ������������B��sum����
 return 0;
}
