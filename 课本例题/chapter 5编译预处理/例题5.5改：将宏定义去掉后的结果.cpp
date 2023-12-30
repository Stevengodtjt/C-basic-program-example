#include<iostream>
//#define DEBUG        //A注释掉该行，即该行不执行
using namespace std;
int main()
{  int n=5,s=1;
   for(int i=1;i<=n;i++)
   {  s=s*i;
      #ifdef DEBUG        //B条件编译的条件不成立
	  cout<<"i="<<i<<'\t'<<"s="<<s<<endl;  //C该行不被编译，不生成机器码
	  #endif 
   }
   cout<<n<<"!="<<s<<endl;
   return 0;
} 

