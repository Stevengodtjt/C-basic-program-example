#include<iostream>
#include<cstring>
using namespace std;
int main()
{  int n,a=0,b=0,c=0,d=0,e;
   char tjt[200];
  cout<<"������һ������:";
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
   cout<<"��д��ĸ��:"<<a<<"��"<<'\n'<<"Сд��ĸ��:"<<b<<"��"<<'\n'<<"�ո���:"<<c<<"��"<<'\n'<<"�����ַ���:"<<d<<"��"<<'\n'<<"�����ַ���:"<<e<<"��";
}
