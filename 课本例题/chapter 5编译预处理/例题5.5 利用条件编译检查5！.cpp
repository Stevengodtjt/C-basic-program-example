#include<iostream>
#define DEBUG            //A定义了宏名DEBUG
using namespace std;
int main()
{   int n=5,s=1;
    for(int i=1;i<=n;i++)
    {  s=s*i;
       #ifdef DEBUG       //B如果DEBUG有定义则编译
	   cout<<"i="<<i<<'\t'<<"s="<<s<<endl;   //C条件编译语句
	   #endif                                //条件编译结束 
    }
    cout<<n<<"!="<<s<<endl;
    return 0;
} 
