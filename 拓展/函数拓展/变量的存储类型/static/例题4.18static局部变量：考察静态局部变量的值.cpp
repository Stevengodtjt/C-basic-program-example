#include<iostream>
using namespace std;
int fun(int a)          //�洢�ھ�̬����ֻ��һ�γ�ֵ
{  static int b=3;
   b=b+a;
   return b;
} 
int main()
{  int a=2,y;
   y=fun(a);
   cout<<"��1�ε���y="<<y<<endl;
   y=fun(a);
   cout<<"��2�ε���y="<<y<<endl;
   return 0; 
}

