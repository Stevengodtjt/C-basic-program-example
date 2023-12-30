#include<iostream>
#include<cstring>
using namespace std;
class STR          //字符串类 
{   char *p;       //字符指针 
      public:
      	STR(char *s);
      	STR(STR &str);
      	~STR();
} ;
STR::STR(char *s) 
{  p=new char[strlen(s)+1];    //动态开辟存储空间 
   strcpy(p,s);                //对字符串赋值 
   cout<<"调用"<<p<<"的构造函数"<<endl; 
}
STR::~STR()
{   if(p)
     { cout<<"调用"<<p<<"的析构函数"<<endl;
	   delete []p; 
     }
}
STR::STR(STR &str)
{  p=new char[strlen(str.p)+1];   //为新建对象动态分配存储空间
   strcpy(p,str.p);               //将原对象的内容复制到新建立的对象
   cout<<"复制构造"<<p<<endl; 
}
int main()
{   STR str1("CHINA");
    STR str2(str1);
    return 0;
}
