#include<iostream>
#include<cstring>
using namespace std;
class STR
{   char *p1,*p2;      //����ԭʼ���ַ���
    char *p;
	   public:
	     STR(char *str1,char *str2);
		 ~STR();
		 int contain(char *str,char ch);   //�ж�ch�Ƿ����ַ���str��
		 char *del(char *str);             //ɾ��str�е��ظ��ַ�������ɾ������ַ���ָ��
		 void fun();                       //��������ԭʼ�ַ����Ľ��� 
		 void print(); 
};
STR::STR(char *str1,char *str2)
{  int len;
   p1=new char[strlen(str1)+1];
   strcpy(p1,str1);
   p2=new char[strlen(str2)+1];
   strcpy(p2,str2);
   if(len=strlen(str1)<strlen(str2))    //�Գ���С���ַ�����Ϊ�Ƚ϶��� 
   {  len=strlen(str1);}
   else len=strlen(str2);
   p=new char[len+1];          //len+1Ϊ�����ַ�������󳤶� 
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
    strcpy(tmp," ");               //��ֵΪ��
	for(i=0;i<strlen(str);i++)
	   if(contain(tmp,str[i])==0)   //�ҵ�������ֵ����Ϊ��    û�ҵ�����ֵ 
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







