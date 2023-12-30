#include<iostream>
#include<cstring>
using namespace std;
class STR
{   char *p1,*p2;      //两个原始的字符串
    char *p;
	   public:
	     STR(char *str1,char *str2);
		 ~STR();
		 int contain(char *str,char ch);   //判断ch是否在字符串str中
		 char *del(char *str);             //删除str中的重复字符，返回删除后的字符串指针
		 void fun();                       //计算两个原始字符串的交集 
		 void print(); 
};
STR::STR(char *str1,char *str2)
{  int len;
   p1=new char[strlen(str1)+1];
   strcpy(p1,str1);
   p2=new char[strlen(str2)+1];
   strcpy(p2,str2);
   if(len=strlen(str1)<strlen(str2))    //以长度小的字符串作为比较对象 
   {  len=strlen(str1);}
   else len=strlen(str2);
   p=new char[len+1];          //len+1为交集字符串的最大长度 
}
STR::~STR()
{   if(p1)  delete []p1;
    if(p2)  delete []p2;
    if(p)   delete []p;
}
int STR::contain(char *str,char ch)
{   for(int i=0;i<strlen(str);i++)
      if(ch==str[i])  return 1;
      return 0;
}
char *STR::del(char *str)
{  int i,j=0;
    char *tmp;
    tmp=new char[strlen(str)+1];
    strcpy(tmp," ");               //初值为空
	for(i=0;i<strlen(str);i++)
	   if(contain(tmp,str[i])==0)   //找到：不赋值，仍为空    没找到：赋值 
	   {  tmp[j]=str[i];
	       j++;
	       tmp[j]='\0';
	   } 
	   return tmp;
}
void STR::fun()
{   int i,j=0;
    char *tmp=del(p1);
    for(i=0;i<strlen(tmp);i++)
    {   if(contain(p2,tmp[i])==1)
         p[j++]=tmp[i];
    }
    p[j]='\0';
    delete []tmp;
}
void STR::print()
{   cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p<<endl;
}
int main()
{   char str1[]="abcabcaaa123xxzz",str2[]="abcdabc2345xz";
    STR str(str1,str2);
    str.fun();
    str.print();
    return 0;
}







