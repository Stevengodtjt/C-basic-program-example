#include<iostream>
#include<cstring>
using namespace std;
class STR
{  char *p;
   public:
   	  STR(char *s);
   	  ~STR();
};
STR::STR(char *s)
{  p=new char[strlen(s)+1];    //��̬���ٴ洢�ռ� 
   strcpy(p,s);              //���ַ�����ֵ 
   cout<<"����"<<p<<"�Ĺ��캯��"<<endl; 
}
STR::~STR()
{   if(p)
     { cout<<"����"<<p<<"����������"<<endl;
	   delete []p; 
     }
}
STR s1("ȫ�ֶ���");       //����ȫ�ֶ���
void fun()
{  static STR s2("�ֲ���̬����");  //����ֲ���̬����
   STR s3("�ֲ���̬����");         //����ֲ���̬���� 
} 
int main()
{  cout<<"main������ʼ"<<endl;
   fun();
   fun();
   cout<<"main��������"<<endl;
   return 0; 
}
