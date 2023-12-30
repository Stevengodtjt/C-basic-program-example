#include<iostream>
using namespace std;
int main()
{  char s1[50];
   cout<<"输入字符串:";
   cin>>s1;                 //用cin格式输入字符串时，空格和回车均作为结束符（自动加'\0'） 
   cout<<"s1="<<s1<<endl;
   return 0;    
}
