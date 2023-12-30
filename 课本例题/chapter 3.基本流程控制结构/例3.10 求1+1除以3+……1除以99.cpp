#include<iostream>
using namespace std;
int main()
{  int i=1;
   float s=0,t;    //累加和为浮点数 
   while(i<100)
   { t=1.0/i;      //通项的表示 
     i=i+2;        //分母进行迭代 
     s=s+t;        //计算累加和 
   }
   cout<<"s="<<s<<'\n';
   return 0;
}
