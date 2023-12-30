#include<iostream>
using namespace std;
int main()
{  int n=5,s=1;
   for(int i=1;i<=n;i++)
   {   s=s*i;
       #if 1            //A表达式为1，表示下面语句进行条件编译。若改为#if 0 则只输出5！=120 
	   cout<<"i="<<i<<'\t'<<"s="<<s<<endl;  //B
	   #endif           //条件编译结束 
   }
   cout<<n<<"!="<<s<<endl;
   return 0;
} 
