#include<iostream>
using namespace std;
int max(int a,int b)
{ int c;         //a,b是形式参数，接收外部数据 
  c=a>b?a:b;
  return c;
}
int main()
{  int x,y,z;
   cout<<"请输入两个整数:";
   cin>>x>>y;
   z=max(x,y);    //x,y是实际参数，为被调函数提供数据
   cout<<x<<"、"<<y<<"的最大值是:"<<z<<endl;
   return 0; 
}
