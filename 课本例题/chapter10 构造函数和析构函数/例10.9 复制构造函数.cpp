#include<iostream>
#include<cstring>
using namespace std;
class STR          //�ַ����� 
{   char *p;       //�ַ�ָ�� 
      public:
      	STR(char *s);
      	STR(STR &str);
      	~STR();
} ;
STR::STR(char *s) 
{  p=new char[strlen(s)+1];    //��̬���ٴ洢�ռ� 
   strcpy(p,s);                //���ַ�����ֵ 
   cout<<"����"<<p<<"�Ĺ��캯��"<<endl; 
}
STR::~STR()
{   if(p)
     { cout<<"����"<<p<<"����������"<<endl;
	   delete []p; 
     }
}
STR::STR(STR &str)
{  p=new char[strlen(str.p)+1];   //Ϊ�½�����̬����洢�ռ�
   strcpy(p,str.p);               //��ԭ��������ݸ��Ƶ��½����Ķ���
   cout<<"���ƹ���"<<p<<endl; 
}
int main()
{   STR str1("CHINA");
    STR str2(str1);
    return 0;
}
