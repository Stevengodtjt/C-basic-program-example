#include<iostream>
using namespace std;
int fun(char s[])
{  int n=0;
   while(*s<='9'&&*s>='0')   
   { n=10*n+*s-'0';
     s++;
   }
   return n;
}
int main()
{   char s[10]={'6','1','*','9','*','0','*'};
    cout<<fun(s)<<endl;
    return 0;
}
