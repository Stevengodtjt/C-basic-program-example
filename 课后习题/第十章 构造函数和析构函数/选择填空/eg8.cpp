#include<iostream>
#include<cstring>
using namespace std;
class STR
{  char *p;
    public:
     STR(char *s){p=new char[strlen(s)+1];  strcpy(p,s);}
     void move(char &t1,char &t2)  
	 {  char t;  
	    t=t1;
	    t1=t2;
	    t2=t;
	 }
	 void fun();
	 void print(){cout<<p<<endl;}
	 ~STR()  {if(p)  delete []p;}
};
void STR::fun()
{  int i=0,j;
    while(*(p+i))
    {   if(!(*(p+i)>='0'&&*(p+i)<='9'))
          {  j=i;
               while(j>0&&(*(p+j-1)>='0'&&*(p+j-1)<='9'))
               {  move(*(p+j-1),*(p+j));
                  j--;
               }
          }
          i++;
    }
}
int main()
{   STR str("3AB45C");
    str.fun();
	str.print();
	return 0; 
}

