#include<iostream>
using namespace std;
int fun(int a,int b)      //A
{return a+b;}
int fun(int a)            //B
{ return a*a;}
int main()
{  cout<<fun(3,5)<<'\n';    //����ʵ�Σ�����A�е�fun����
   cout<<fun(5)<<endl;      //һ��ʵ�Σ�����B�е�fun����
   return 0; 
}

