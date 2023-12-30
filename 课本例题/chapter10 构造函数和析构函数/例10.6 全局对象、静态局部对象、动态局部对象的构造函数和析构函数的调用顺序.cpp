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
{  p=new char[strlen(s)+1];    //动态开辟存储空间 
   strcpy(p,s);              //对字符串赋值 
   cout<<"调用"<<p<<"的构造函数"<<endl; 
}
STR::~STR()
{   if(p)
     { cout<<"调用"<<p<<"的析构函数"<<endl;
	   delete []p; 
     }
}
STR s1("全局对象");       //定义全局对象
void fun()
{  static STR s2("局部静态对象");  //定义局部静态对象
   STR s3("局部动态对象");         //定义局部动态对象 
} 
int main()
{  cout<<"main函数开始"<<endl;
   fun();
   fun();
   cout<<"main函数结束"<<endl;
   return 0; 
}
