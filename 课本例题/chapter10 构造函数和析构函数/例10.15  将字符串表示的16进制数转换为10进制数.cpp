#include<iostream>
#include<cstring>
using namespace std;
class Num            //将16进制转换成10进制类
{   char *p;         //字符串，存放16进制数
    int n;           //存放转换后的10进制数
	 public:
	  Num(char *str);     //构造函数，用str初始化p
	  void fun();         //转换
	  void print();       //输出16进制和对应的10进制数
	  ~Num(); 
} ;
Num::Num(char *str)
{   p=new char[strlen(str)+1];
    strcpy(p,str);
}
void Num::fun()
{   n=0;
    for(int i=0;p[i]!='\0';i++)
    {   if(p[i]>='0'&&p[i]<='9')    //16进制字符为数字字符
	     n=n*16+p[i]-'0';
		 else if(p[i]>='a'&&p[i]<='f')   //16进制字符为小写字符 
		   n=n*16+p[i]-'a'+10; 
		 else n=n*16+p[i]-'A'+10;       //16进制字符为大写字符 
    }
}
void Num::print()
{  cout<<"16进制数为:0X"<<p<<endl;
   cout<<"10进制数为:"<<n<<endl; 
}
Num::~Num()
{if(p) delete []p;}
int main()
{  char str[100];
    cout<<"请输入一个16进制数:";
	cin.getline(str,100);
	Num num(str);                   //初始化转换类的对象
	num.fun();                      //转换
	num.print();                    //输出
	return 0; 
}



