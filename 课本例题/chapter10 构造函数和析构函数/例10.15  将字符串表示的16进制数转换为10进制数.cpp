#include<iostream>
#include<cstring>
using namespace std;
class Num            //��16����ת����10������
{   char *p;         //�ַ��������16������
    int n;           //���ת�����10������
	 public:
	  Num(char *str);     //���캯������str��ʼ��p
	  void fun();         //ת��
	  void print();       //���16���ƺͶ�Ӧ��10������
	  ~Num(); 
} ;
Num::Num(char *str)
{   p=new char[strlen(str)+1];
    strcpy(p,str);
}
void Num::fun()
{   n=0;
    for(int i=0;p[i]!='\0';i++)
    {   if(p[i]>='0'&&p[i]<='9')    //16�����ַ�Ϊ�����ַ�
	     n=n*16+p[i]-'0';
		 else if(p[i]>='a'&&p[i]<='f')   //16�����ַ�ΪСд�ַ� 
		   n=n*16+p[i]-'a'+10; 
		 else n=n*16+p[i]-'A'+10;       //16�����ַ�Ϊ��д�ַ� 
    }
}
void Num::print()
{  cout<<"16������Ϊ:0X"<<p<<endl;
   cout<<"10������Ϊ:"<<n<<endl; 
}
Num::~Num()
{if(p) delete []p;}
int main()
{  char str[100];
    cout<<"������һ��16������:";
	cin.getline(str,100);
	Num num(str);                   //��ʼ��ת����Ķ���
	num.fun();                      //ת��
	num.print();                    //���
	return 0; 
}



