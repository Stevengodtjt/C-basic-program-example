#include<iostream>
#include<cstring>
using namespace std;
int main()
{  int n,a=0,b=0,c=0,d=0,e;
   char tjt[200];
  cout<<"请输入一串文字:";
  cin.getline(tjt,200);
   n=strlen(tjt);
   char *p;
   p=&tjt[0];
 while(*p!='\0')
 {
      if(*p>='A'&&*p<='Z')
      {
       a++;
      }
      if(*p>='a'&&*p<='z')
      { 
         b++;
      }
      if(*p==32)
      { 
         c++;
      }
      if(*p>='0'&&*p<='9')
      {   
         d++;
      }
      p++;
  }
  e=n-a-b-c-d;
   cout<<"大写字母有:"<<a<<"个"<<'\n'<<"小写字母有:"<<b<<"个"<<'\n'<<"空格有:"<<c<<"个"<<'\n'<<"数字字符有:"<<d<<"个"<<'\n'<<"其他字符有:"<<e<<"个";
}
